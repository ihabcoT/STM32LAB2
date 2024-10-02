/*
 * Exercise1.c
 *
 *  Created on: Oct 2, 2024
 *      Author: MACBOOK AIR
 */

#include "Exercise1.h"

void display7SEG(int num) {
	switch(num){
		case 0:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, RESET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, RESET);
			break;
		default:
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, SET);
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, SET);
			break;
	}
}
