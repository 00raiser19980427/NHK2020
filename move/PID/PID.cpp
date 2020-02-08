/*
 * PID.cpp
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#include <HIROKI/move/PID/PID.h>


void PID::set_PID_constant(float kp,float ki,float kd){
	KP = &kp;
	KI = &ki;
	KD = &kd;
}

float PID::PIDout(float measured,float target){
	i[0]= i[1];
    i[1] =target - measured ;
	if(i[0]*i[1] > 0){
		integral = integral + (i[0] + i[1]) / 2 * 0.005;//0.005‚Í§ŒäüŠúdt(msec)
	}
    return *KP * i[1] + *KI * integral + *KD * (i[1] - i[0]) / 0.005;
}
