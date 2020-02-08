/*
 * distributeSpeed.cpp
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#include <HIROKI/move/distributeSpeed/distributeSpeed.h>

void distributeSpeed::distribute(float x,float y,float yaw,float now_theta){
	V1 =-x*sin(PI*1/4+now_theta) + y * cos(PI*1/4+now_theta)+ RR*yaw;
	V2 = x*cos(PI*1/4+now_theta) + y * sin(PI*1/4+now_theta)+ RR*yaw;
	V3 = x*sin(PI*1/4+now_theta) - y * cos(PI*1/4+now_theta)+ RR*yaw;
	V4 =-x*cos(PI*1/4+now_theta) - y * sin(PI*1/4+now_theta)+ RR*yaw;
}
