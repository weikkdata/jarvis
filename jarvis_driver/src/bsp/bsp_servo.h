/*
 * @Descripttion: The driver of the servos
 * @version: v1.0.0
 * @Author: Kevin
 * @Email: kkcoding@qq.com
 * @Date: 2018-01-03 14:39:08
 * @LastEditors: Kevin
 * @LastEditTime: 2019-07-10 16:46:44
 * @Copyright (C): 2016-2020, weikk
 */

#ifndef __BSP_SERVO_H__
#define __BSP_SERVO_H__

#include "stm32f10x.h"

enum EmServoID{
    kEmServoID1=1,
    kEmServoID2,
    kEmServoID3,
    kEmServoID4,
    kEmServoID5,
    kEmServoID6,
    kEmServoIDMax
};

#define SERVO_1_PIN	GPIO_Pin_11
#define SERVO_2_PIN	GPIO_Pin_13
#define SERVO_3_PIN	GPIO_Pin_14
#define SERVO_4_PIN	GPIO_Pin_15
#define SERVO_5_PIN	GPIO_Pin_8
#define SERVO_6_PIN	GPIO_Pin_1

#define SERVO_1_PORT	GPIOA
#define SERVO_2_PORT	GPIOB
#define SERVO_3_PORT	GPIOB
#define SERVO_4_PORT	GPIOB
#define SERVO_5_PORT	GPIOA
#define SERVO_6_PORT	GPIOA

#define SERVO_1_RCC	RCC_APB2Periph_GPIOA
#define SERVO_2_RCC	RCC_APB2Periph_GPIOB
#define SERVO_3_RCC RCC_APB2Periph_GPIOB
#define SERVO_4_RCC	RCC_APB2Periph_GPIOB
#define SERVO_5_RCC	RCC_APB2Periph_GPIOA
#define SERVO_6_RCC	RCC_APB2Periph_GPIOA

void ServoInit(void);
int ServoSetAngleBlock(int id, int angle_val);   //will wait one cycle.
int ServoSetAngle(int id, int angle_val);/*定义一个脉冲函数，用来模拟方式产生PWM值*/
int ServoGetAngle(int id);
int ServoGetPw(int id);

void front_detection(void);
void left_detection(void);
void right_detection(void);



#endif

