#ifndef MY_DEFINE_H
#define MY_DEFINE_H

//ПОРТ D

#define D15_ON GPIOD->BSRR=GPIO_BSRR_BS_15;
#define D15_OFF GPIOD->BSRR=GPIO_BSRR_BR_15;
#define D14_ON GPIOD->BSRR=GPIO_BSRR_BS_14;
#define D14_OFF GPIOD->BSRR=GPIO_BSRR_BR_14;
#define D13_ON GPIOD->BSRR=GPIO_BSRR_BS_13;
#define D13_OFF GPIOD->BSRR=GPIO_BSRR_BR_13;
#define D12_ON GPIOD->BSRR=GPIO_BSRR_BS_12;
#define D12_OFF GPIOD->BSRR=GPIO_BSRR_BR_12;
#define D11_ON GPIOD->BSRR=GPIO_BSRR_BS_11;
#define D11_OFF GPIOD->BSRR=GPIO_BSRR_BR_11;
#define D10_ON GPIOD->BSRR=GPIO_BSRR_BS_10;
#define D10_OFF GPIOD->BSRR=GPIO_BSRR_BR_10;
#define D9_ON GPIOD->BSRR=GPIO_BSRR_BS_9;
#define D9_OFF GPIOD->BSRR=GPIO_BSRR_BR_9;
#define D8_ON GPIOD->BSRR=GPIO_BSRR_BS_8;
#define D8_OFF GPIOD->BSRR=GPIO_BSRR_BR_8;
#define D7_ON GPIOD->BSRR=GPIO_BSRR_BS_7;
#define D7_OFF GPIOD->BSRR=GPIO_BSRR_BR_7;
#define D6_ON GPIOD->BSRR=GPIO_BSRR_BS_6;
#define D6_OFF GPIOD->BSRR=GPIO_BSRR_BR_6;
#define D5_ON GPIOD->BSRR=GPIO_BSRR_BS_5;
#define D5_OFF GPIOD->BSRR=GPIO_BSRR_BR_5;
#define D4_ON GPIOD->BSRR=GPIO_BSRR_BS_4;
#define D4_OFF GPIOD->BSRR=GPIO_BSRR_BR_4;
#define D3_ON GPIOD->BSRR=GPIO_BSRR_BS_3;
#define D3_OFF GPIOD->BSRR=GPIO_BSRR_BR_3;
#define D2_ON GPIOD->BSRR=GPIO_BSRR_BS_2;
#define D2_OFF GPIOD->BSRR=GPIO_BSRR_BR_2;
#define D1_ON GPIOD->BSRR=GPIO_BSRR_BS_1;
#define D1_OFF GPIOD->BSRR=GPIO_BSRR_BR_1;
#define D0_ON GPIOD->BSRR=GPIO_BSRR_BS_0;
#define D0_OFF GPIOD->BSRR=GPIO_BSRR_BR_0;

//РЕЖИМЫ РАБОТЫ

#define MODE_RED				0
#define MODE_GREEN			1
#define MODE_BLUE				2
#define MODE_YELLOW			3

//КНОПКА
//#define BUTTON_READ GPIOA->IDR & GPIO_IDR_IDR_0;


#endif

