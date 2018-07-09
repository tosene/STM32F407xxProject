#ifndef PCF8563_LIB_H_
#define PCF8563_LIB_H_
//////////////////////////////////////////////////////////////////////////////////////
//------------ʹ�ð�����ͷ�ļ�
#include "pcf8563_cfg.h"
//---��������
UINT8_T PCF8563Lib_Init(PCF8563_HandlerType *PCF8563HandlerType, void(*msgDelay)(UINT32_T delay));
UINT8_T PCF8563Lib_DeInit(PCF8563_HandlerType *PCF8563HandlerType);
UINT8_T PCF8563Lib_ClockOut(PCF8563_HandlerType *PCF8563HandlerType, UINT8_T preVal);
UINT8_T PCF8563Lib_ReadRTC(PCF8563_HandlerType *PCF8563HandlerType);
UINT8_T PCF8563Lib_WriteRTC(PCF8563_HandlerType *PCF8563HandlerType, RTC_HandlerType rtc);
///////////////////////////////////////////////////////////////////////////////
#endif /* PCF8563_LIB_H_ */