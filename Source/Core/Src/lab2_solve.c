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
const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 5, 0, 8};
void update7SEG(int index){
	index = index % 4;
	switch(index){
		case 0:
			display7SEG(led_buffer[0]);
			HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
			break;
		case 1:
			display7SEG(led_buffer[1]);
			HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
			break;
		case 2:
			display7SEG(led_buffer[2]);
			HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_RESET );
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_SET );
			break;
		case 3:
			display7SEG(led_buffer[3]);
			HAL_GPIO_WritePin ( EN0_GPIO_Port , EN0_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN1_GPIO_Port , EN1_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN2_GPIO_Port , EN2_Pin , GPIO_PIN_SET );
			HAL_GPIO_WritePin ( EN3_GPIO_Port , EN3_Pin , GPIO_PIN_RESET );
			break;
		default:
			break;
	}

}
int count_ex3;
void ex3_init(){
	count_ex3 = 0;
}
void ex3_run(){
	update7SEG(count_ex3);
	count_ex3 = (count_ex3 + 1) % 4;
}
int hour;
int minute;
int second;
void updateClockBuffer(){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}
void ex5_init(){
	hour = 15;
	minute = 8;
	second = 50;
}
void ex5_run(){
	second++;
	if(second >= 60){
		second = 0;
		minute++;
	}
	if(minute >= 60){
		minute = 0;
		hour++;
	}
	if(hour >= 24){
		hour = 0;
	}
	updateClockBuffer();
}
int count_ex8 = 0;
void ex8_run(){
	update7SEG(count_ex8);
	count_ex8 = (count_ex8 + 1) % 4;
}
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08};
int start;
int i;
int count;
void updateLEDMatrix(int index){
	switch (count){
	case 0:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 1:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 2:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 3:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 4:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 5:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 6:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_RESET );
		break;
	case 7:
		HAL_GPIO_WritePin ( ENM0_GPIO_Port , ENM0_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM1_GPIO_Port , ENM1_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM2_GPIO_Port , ENM2_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM3_GPIO_Port , ENM3_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM4_GPIO_Port , ENM4_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM5_GPIO_Port , ENM5_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM6_GPIO_Port , ENM6_Pin , GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ENM7_GPIO_Port , ENM7_Pin , GPIO_PIN_SET );
		break;
	default:
		break;
	}
	GPIOB->ODR &= 0x00FF;
	GPIOB->ODR |= (matrix_buffer[index] << 8);
}
void ex9_init(){
	matrix_buffer[0] = 0x00;
	matrix_buffer[1] = 0x3F;
	matrix_buffer[2] = 0x7F;
	matrix_buffer[3] = 0xCC;
	matrix_buffer[4] = 0xCC;
	matrix_buffer[5] = 0x7F;
	matrix_buffer[6] = 0x3F;
	matrix_buffer[7] = 0x00;
}
int count_ex9 = 0;
void ex9_run(){
	updateLEDMatrix(count_ex9);
	count_ex9 = (count_ex9 + 1) % 8;
}
void ex10_init(){
	matrix_buffer[0] = 0x18;
	matrix_buffer[1] = 0x24;
	matrix_buffer[2] = 0x66;
	matrix_buffer[3] = 0x99;
	matrix_buffer[4] = 0x99;
	matrix_buffer[5] = 0x66;
	matrix_buffer[6] = 0x24;
	matrix_buffer[7] = 0x18;
	start = 0;
	i = 7;
	count = 7;
}
void ex10_run(){
	updateLEDMatrix(i);
	i--;
	count--;
	if(count < 0) {
		count = 7;
		i = start;
		start = (start + 1) % 8;
	}
	if(i < 0) i = 7;
}
