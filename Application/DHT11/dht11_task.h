#ifndef DHT11_TASK_H_
#define DHT11_TASK_H_
//////////////////////////////////////////////////////////////////////////////////////
#include "dht11_lib.h"

//---��������
UINT8_T DHT11Task_Init(DHT11_HandlerType *DHT11x, void(*Delayus)(UINT32_T delay), void(*Delayms)(UINT32_T delay));
UINT8_T DHT11Task_DeInit(DHT11_HandlerType *DHT11x);
UINT8_T DHT11Task_Read(DHT11_HandlerType *DHT11x);
///////////////////////////////////////////////////////////////////////////////////////
#endif /*DHT11_TASK_H_ */