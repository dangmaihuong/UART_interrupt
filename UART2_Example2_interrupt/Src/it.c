/*
 * it.c
 *
 *  Created on: May 12, 2020
 *      Author: dangm
 */

#include "main.h"

extern UART_HandleTypeDef huart2;
void SysTick_Handler (void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}

void USART2_IRQHandler(void){
	 //Here, process handler in the project
	HAL_UART_IRQHandler(&huart2);

}
