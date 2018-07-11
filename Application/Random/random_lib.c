#include "random_lib.h"

///////////////////////////////////////////////////////////////////////////////
//////函	   数：void RandomLib_Init( void )
//////功	   能：随机数的初始化
//////输入参数: 
//////输出参数: 
//////说	   明：
//////////////////////////////////////////////////////////////////////////////
void RandomLib_Init( void )
{
	Random_Init( );
}

///////////////////////////////////////////////////////////////////////////////
//////函	   数：void RandomLib_DeInit( void )
//////功	   能：随机数的注销
//////输入参数: 
//////输出参数: 
//////说	   明：
//////////////////////////////////////////////////////////////////////////////
void RandomLib_DeInit( void )
{
	Random_DeInit( );
}

///////////////////////////////////////////////////////////////////////////////
//////函		数： 
//////功		能： 
//////输入参数: 
//////输出参数: 
//////说		明： 
//////////////////////////////////////////////////////////////////////////////
UINT32_T RandomLib_GetVal(void)
{
	return Random_GetVal();
}

///////////////////////////////////////////////////////////////////////////////
//////函	   数：UINT32_T RandomLib_GetRandomRang( UINT32_T minVal , UINT32_T maxVal )
//////功	   能：产生指定范围的随机数
//////输入参数: 
//////输出参数: 产生的随机数
//////说	   明：
//////////////////////////////////////////////////////////////////////////////
UINT32_T RandomLib_GetRand( UINT32_T minVal , UINT32_T maxVal )
{
	return Random_GetRand( minVal , maxVal );
}