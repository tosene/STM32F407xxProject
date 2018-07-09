#include "crc_task.h"

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
void CRC32Task_Init(UINT8_T isHW)
{
	CRC32Lib_Init(isHW);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT32_T CRC32Task_GetCalc8BitsData(UINT8_T *pVal, UINT32_T length)
{
	return pCRC->msg8BitsTask(pVal, length);
}

///////////////////////////////////////////////////////////////////////////////
//////��		����
//////��		�ܣ�
//////�������:
//////�������:
//////˵		����
//////////////////////////////////////////////////////////////////////////////
UINT32_T CRC32Task_GetCalc32BitsData(UINT32_T *pVal, UINT32_T length)
{
	return pCRC->msg32BitsTask(pVal, length);
}