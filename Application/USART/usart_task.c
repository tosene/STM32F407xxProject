#include "usart_task.h"



///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTTask_Init(USART_HandlerType*  USARTx, UINT16_T rxSize, UINT8_T* pRxVal, UINT8_T rxCRCFlag, UINT16_T txSize, UINT8_T* pTxVal, UINT8_T txCRCFlag, UINT32_T(*sysTickFunc)(void))
{
	return USARTLib_Init(USARTx, rxSize, pRxVal, rxCRCFlag, txSize, pTxVal, txCRCFlag, sysTickFunc);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTTask_DeInit(USART_HandlerType*  USARTx)
{
	return USARTLib_DeInit(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTTask_TransmitData8Bits(USART_HandlerType*USARTx, UINT8_T val)
{
	return USARTLib_TransmitData8Bits(USARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTTask_ReceiveData8Bits(USART_HandlerType*USARTx)
{
	return USARTLib_ReceiveData8Bits(USARTx);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTTask_Rece8BitsCount_Task(USART_HandlerType*USARTx, UINT8_T val)
{
	return USARTLib_Rece8BitsCount_Task(USARTx, val);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT8_T  USARTTask_Rece16BitsCount_Task(USART_HandlerType*USARTx, UINT8_T val)
{
	return USARTLib_Rece16BitsCount_Task(USARTx, val);
}
