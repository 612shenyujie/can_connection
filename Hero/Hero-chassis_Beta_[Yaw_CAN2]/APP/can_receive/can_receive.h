#ifndef __CAN_RECEIVE_H
#define __CAN_RECEIVE_H

#include "stm32f4xx.h"

typedef struct
{
	uint16_t    lastangle; /*�ϴε���Ƕ�*/
	
	uint16_t 			sumangle;/*�ǶȺ�*/
	
	uint16_t 		angle;/*���ʵ�ʽǶ�*/
	
	int16_t		  speed;/*���ʵʱ�ٶ�*/
	
	uint8_t     temp; /*����¶�*/
	
	int32_t 		turns;/*������ϵ翪ʼת����Ȧ��*/
}Motor_HandleTypeDef;		


extern Motor_HandleTypeDef yaw_can_rx,pitch_can_rx,shoot_can_rx[2];



#endif