#include "systick_task.h"

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 SysTickTask_Init(void)
{
	return SysTickLib_Init();
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 SysTickTask_DeInit(void)
{
	return SysTickLib_DeInit();
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 SysTickTask_TickTask(UINT32_T tickFreq, void(*TickTask)(void))
{
	return SysTickLib_TickTask(tickFreq, TickTask);
}

///////////////////////////////////////////////////////////////////////////////
//////��	   ����
//////��	   �ܣ�
//////�������:
//////�������:
//////˵	   ����
//////////////////////////////////////////////////////////////////////////////
UINT8_T SysTickTask_IRQDecTick(UINT32_T waitDecTick)
{
	return SysTickLib_IRQDecTick(waitDecTick);
}
///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT32_T SysTickTask_GetTick(void)
{
	return SysTickLib_GetTick();
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 SysTickTask_IRQTask(void)
{
	return SysTickLib_IRQTask();
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T	 SysTickTask_WaitTick(UINT32_T usTimer)
{
	return SysTickLib_WaitTick(usTimer);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT8_T  SysTickTask_1msTick(void)
{
	return SysTickLib_1msTick();
}

///////////////////////////////////////////////////////////////////////////////
//////��		���� 
//////��		�ܣ� 
//////�������: 
//////�������: 
//////˵		���� 
//////////////////////////////////////////////////////////////////////////////
UINT32_T SysTickTask_GetTickOVF(void)
{
	return SysTickLib_GetTickOVF();
}