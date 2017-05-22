#include "ADC_driver.h"
#include "UART_driver.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <string.h>

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/delay.h>

#define LED_DDR			DDRB
#define LED_DDR_POS		DDRB5
#define LED_PIN			PINB
#define LED_PIN_POS		PINB5
#define LED_PORT		PORTB
#define LED_PORT_POS	PORTB5
#define SIZE 80
#define Y 20
//uint8_t ir=0;
//uint8_t pipe[SIZE+1];
//uint8_t data;
void SystemInit() {
	LED_DDR |= 1 << LED_DDR_POS;
	LED_PORT &= ~(1 << LED_PORT_POS);
	ADC_Init();
	UART_Init();
	sei();
	/*for (int i=0;i<SIZE;i++){
		pipe[i]=0;
	}*/
	//pipe[SIZE]='\n';
	//----- START OF STDIO IO BUFFER SETUP
	FILE UART_output = FDEV_SETUP_STREAM(UART_SendCharacter, NULL, _FDEV_SETUP_WRITE);
	stdout = &UART_output;
	FILE UART_input = FDEV_SETUP_STREAM(NULL, UART_GetCharacter, _FDEV_SETUP_READ);
	stdin = &UART_input;
	printf("Startup...\r\n");
	
}/*
void addchar(char c){
	if (ir==SIZE-1){
		for (int i=0;i<ir;i++){
			pipe[i]=pipe[i+1];
		}
		pipe[ir]=c;
	}
	else {
		ir++;
		pipe[ir]=c;
	}		
}
void kiirpipe(){
	for (int i=0; i<SIZE;i++){
		printf(" %d", pipe[i]);		
	} printf("\n");
}
void kirajzol(){
	for(int j=0;j<Y; j++){
		for (int i=0;i<SIZE;i++){
			UART_SendCharacter(pipe[i]);
			if(pipe[i]==Y-j){
				UART_SendCharacter('@');
			}else{
				UART_SendCharacter('.');
			}
		}
		UART_SendCharacter('\n');		
	}
	printf("cucc:\n");
	kiirpipe();
	
}*/

int main(void) {
	uint16_t adc_data=0;
	SystemInit();
	while (1) {
		_delay_ms(1000);
		//adc_data = ADC_Read()/4;
		printf(" data1: %d", adc_data);
		//adc_data = adc_data*Y;
		//printf(" dat2: %d", adc_data);
		//adc_data = adc_data/255; 
		//printf(" data3: %d", adc_data);
		//UART_SendCharacter();
		//addchar(data);
		//kirajzol();	
	}
}
