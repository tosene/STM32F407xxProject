#include "main.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：系统时钟的配置
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
void SystemClock_Config(void)
{
	//---设置FLASH的延时读取周期数
	LL_FLASH_SetLatency(LL_FLASH_LATENCY_5);
	//---等待FLASH延时设置完成---判断设置是否成功
	if (LL_FLASH_GetLatency() != LL_FLASH_LATENCY_5)
	{
		Error_Handler();
	}
	//---设置内部调节器的输出电压
	LL_PWR_SetRegulVoltageScaling(LL_PWR_REGU_VOLTAGE_SCALE1);
	//---使能外部晶振
	LL_RCC_HSE_Enable();
	//---等待外部晶振稳定
	while (LL_RCC_HSE_IsReady() != 1)
	{
	}
	//---使能内部低频晶振
	LL_RCC_LSI_Enable();
	//---等待内部低频晶振稳定
	while (LL_RCC_LSI_IsReady() != 1)
	{
	}
	//---使能备份域的访问
	LL_PWR_EnableBkUpAccess();
	//---强制备份域的复位
	LL_RCC_ForceBackupDomainReset();
	//---释放对备份域的服务
	LL_RCC_ReleaseBackupDomainReset();
	//---设置RTC时钟
	LL_RCC_SetRTCClockSource(LL_RCC_RTC_CLKSOURCE_HSE);
	//---设置RTC时钟分频数
	LL_RCC_SetRTC_HSEPrescaler(LL_RCC_RTC_HSE_DIV_8);
	//---使能RTC
	LL_RCC_EnableRTC();
	//---设置系统的PLL
	LL_RCC_PLL_ConfigDomain_SYS(LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 168, LL_RCC_PLLP_DIV_2);
	//---设置USB时钟
	LL_RCC_PLL_ConfigDomain_48M(LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 168, LL_RCC_PLLQ_DIV_7);
	//---使能PLL
	LL_RCC_PLL_Enable();
	//---等待PLL稳定
	while (LL_RCC_PLL_IsReady() != 1)
	{
	}
	//---设置AHB总线时钟分频
	LL_RCC_SetAHBPrescaler(LL_RCC_SYSCLK_DIV_1);
	//---设置APB1总线时钟分频
	LL_RCC_SetAPB1Prescaler(LL_RCC_APB1_DIV_4);
	//---设置APB2总线时钟分频
	LL_RCC_SetAPB2Prescaler(LL_RCC_APB2_DIV_2);
	//---设置系统时钟
	LL_RCC_SetSysClkSource(LL_RCC_SYS_CLKSOURCE_PLL);
	//--- 等待系统时钟稳定
	while (LL_RCC_GetSysClkSource() != LL_RCC_SYS_CLKSOURCE_STATUS_PLL)
	{
	}
	//---设置系统滴答定时器的时钟为系统高速时钿--使能滴答定时器的时钟
	LL_SYSTICK_SetClkSource(LL_SYSTICK_CLKSOURCE_HCLK);
	//---设置系统时钟
	LL_SetSystemCoreClock(168000000);
	//---使能Flash的预读取功能
	LL_FLASH_EnablePrefetch();
	//---使能数据缓存
	LL_FLASH_EnableDataCache();
	//---使能指令高速缓存
	LL_FLASH_EnableInstCache();
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
void NVIC_Init(void)
{
	//---PWR时钟
	LL_APB1_GRP1_EnableClock(LL_APB1_GRP1_PERIPH_PWR);
	//---设置NVIC的分组模式
	NVIC_SetPriorityGrouping(NVIC_PRIORITYGROUP_4);
	/* System interrupt init*/
	/* MemoryManagement_IRQn interrupt configuration */
	NVIC_SetPriority(MemoryManagement_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
	/* BusFault_IRQn interrupt configuration */
	NVIC_SetPriority(BusFault_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
	/* UsageFault_IRQn interrupt configuration */
	NVIC_SetPriority(UsageFault_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
	/* SVCall_IRQn interrupt configuration */
	NVIC_SetPriority(SVCall_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
	/* DebugMonitor_IRQn interrupt configuration */
	NVIC_SetPriority(DebugMonitor_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
	/* PendSV_IRQn interrupt configuration */
	NVIC_SetPriority(PendSV_IRQn, NVIC_EncodePriority(NVIC_GetPriorityGrouping(), 0, 0));
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
void Sys_Init(void)
{
	SystemClock_Config();
	NVIC_Init();
	GPIOTask_Init();
	SysTickTask_Init();
	RandomTask_Init();

	//---使能端口时钟
	GPIOTask_Clock(GPIOB, 1);
	LL_GPIO_InitTypeDef GPIO_InitStruct;

	//---GPIO的初始化
	GPIO_InitStruct.Pin = LL_GPIO_PIN_13;						//---对应的GPIO的引脚
	GPIO_InitStruct.Mode = LL_GPIO_MODE_OUTPUT;					//---配置状态为输出模式
	GPIO_InitStruct.Speed = LL_GPIO_SPEED_FREQ_LOW;				//---GPIO的速度
	GPIO_InitStruct.OutputType = LL_GPIO_OUTPUT_PUSHPULL;		//---输出模式---推完输出
	GPIO_InitStruct.Pull = LL_GPIO_PULL_UP;						//---上拉使能
#ifndef USE_MCU_STM32F1
	GPIO_InitStruct.Alternate = LL_GPIO_AF_0;				//---端口复用模式
#endif
															//---初始化端口
	LL_GPIO_Init(GPIOB, &GPIO_InitStruct);

	GPIO_OUT_1(GPIOB, LL_GPIO_PIN_13);

	DHT11_Init(pDHT11Device0,DelayTask_us,DelayTask_ms);
	DHT11_Read(pDHT11Device0);

}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
int main(void)
{
	//---系统初始化函数
	Sys_Init();
	//---主循环
	while (1)
	{
        DHT11_Read(pDHT11Device0);
		DelayTask_ms(500);
		DelayTask_ms(500);
	}
}