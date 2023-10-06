/*
 * main.c
 *
 *  Created on: Sep 30, 2021
 *      Author: Eng Ahmed Tarek
 */
#include "STD_TYPES.h"
#include "HKPD_Interface.h"
#include "HLCD_Interface.h"
#include "avr/delay.h"

void main(void)
{
	HLCD_VoidInit();
	HKPD_Init();
	u32 x,num1 ;
	while (1)
	{
		x=Get_PressKey();
		if(x!=50)
		{
			for (num1=0;x==10;)
			{
				x=Get_PressKey();
			num1=(num1*10)+x;

			}
			HLCD_SendNumber(num1);
		}


	}





}

/*x=Get_PressKey();
				if(x!=50)
				{
					HLCD_SendNumber(x);

				}*/
