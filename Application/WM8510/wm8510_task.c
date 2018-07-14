
#include "wm8510_task.h"

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T WM8510Task_Init(WM8510_HandlerType *WM8510x, void(*msgDelay)(UINT32_T delay), UINT8_T isHWI2C)
{
	return WM8510Lib_Init(WM8510x, msgDelay, isHWI2C);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T WM8510Task_DeInit(WM8510_HandlerType *WM8510x, UINT8_T isHWI2C)
{
	return WM8510Lib_DeInit(WM8510x, isHWI2C);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T WM8510Task_SetFreqHz(WM8510_HandlerType *WM8510x, UINT32_T freq)
{
	return WM8510Lib_SetFreqHz(WM8510x, freq);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T WM8510Task_SetFreqKHz(WM8510_HandlerType *WM8510x, float freq)
{
	return WM8510Lib_SetFreqKHz(WM8510x, freq);
}

///////////////////////////////////////////////////////////////////////////////
//////函		数：
//////功		能：
//////输入参数:
//////输出参数:
//////说		明：
//////////////////////////////////////////////////////////////////////////////
UINT8_T WM8510Task_SetFreqMHz(WM8510_HandlerType *WM8510x, float freq)
{
	return WM8510Lib_SetFreqMHz(WM8510x, freq);
}