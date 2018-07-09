#ifndef PCF8563_TASK_H_
#define PCF8563_TASK_H_
//////////////////////////////////////////////////////////////////////////////////////
//------------ʹ�ð�����ͷ�ļ�
#include "pcf8563_lib.h"

//---��������
UINT8_T PCF8563Task_Init(PCF8563_HandlerType *PCF8563HandlerType, void(*msgDelay)(UINT32_T delay));
UINT8_T PCF8563Task_DeInit(PCF8563_HandlerType *PCF8563HandlerType);
UINT8_T PCF8563Task_ClockOut(PCF8563_HandlerType *PCF8563HandlerType, UINT8_T preVal);
UINT8_T PCF8563Task_ReadRTC(PCF8563_HandlerType *PCF8563HandlerType);
UINT8_T PCF8563Task_WriteRTC(PCF8563_HandlerType *PCF8563HandlerType, RTC_HandlerType rtc);
//////////////////////////////////////////////////////////////////////////////////////
#endif /* PCF8563_TASK_H_ */