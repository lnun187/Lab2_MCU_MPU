/*
 * lab2_solve.c
 *
 *  Created on: Sep 24, 2024
 *      Author: Admin
 */
#include "lab2_solve.h"

void display7SEG(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_SET );
		break;
	case 1:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_SET );
		break;
	case 2:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 3:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 4:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 5:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 6:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 7:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_SET );
		break;
	case 8:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	case 9:
		HAL_GPIO_WritePin ( SEG0_GPIO_Port , SEG0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG1_GPIO_Port , SEG1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG2_GPIO_Port , SEG2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG3_GPIO_Port , SEG3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG4_GPIO_Port , SEG4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( SEG5_GPIO_Port , SEG5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( SEG6_GPIO_Port , SEG6_Pin , GPIO_PIN_RESET );
		break;
	default:
		break;
	}
}
int state_ex1;
void ex1_init(){
	state_ex1 = 0;
	HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
	display7SEG(1);
}
void ex1_run(){
	if(state_ex1 == 0) display7SEG(1);
	if(state_ex1 == 1) display7SEG(2);
	state_ex1 = 1 - state_ex1;
	HAL_GPIO_TogglePin ( EN0_GPIO_Port , EN0_Pin );
	HAL_GPIO_TogglePin ( EN1_GPIO_Port , EN1_Pin );
}
int state_ex2;
void ex2_init(){
	state_ex2 = 0;
	HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_RESET );
	HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
	HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
	display7SEG(1);
}
void ex2_run(){
	switch(state_ex2){
		case 0:
			display7SEG(1);
			state_ex2 = 1;
			HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
			break;
		case 1:
			display7SEG(2);
			state_ex2 = 2;
			HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
			break;
		case 2:
			display7SEG(3);
			state_ex2 = 3;
			HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
			break;
		case 3:
			display7SEG(0);
			state_ex2 = 0;
			HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_RESET );
			break;
		default:
			state_ex2 = 0;
			break;
	}

}
void ex3_init();
void ex3_run();
void ex4_init();
void ex4_run();
void ex5_init();
void ex5_run();
void ex6_init();
void ex6_run();
void ex7_init();
void ex7_run();
void ex8_init();
void ex8_run();
void ex9_init();
void ex9_run();
void ex10_init();
void ex10_run();
