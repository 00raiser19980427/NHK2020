/*
 * rootShape.cpp
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#include <HIROKI/move/routeSet/routeShape/routeShape.h>

float routeShape::bezier3(float anc0,float anc1,float anc2,float anc3,float t){
	return (1-t)*(1-t)*(1-t)*anc0 + 3*(1-t)*(1-t)*t*anc1 + 3*(1-t)*t*t*anc2 + t*t*t*anc3 ;
}

float routeShape::bezier5(float anc0, float anc1, float anc2, float anc3, float anc4,float anc5,float t){
	return (1-t)*(1-t)*(1-t)*(1-t)*(1-t)*anc0+5*(1-t)*(1-t)*(1-t)*(1-t)*t*anc1+10*(1-t)*(1-t)*(1-t)*t*t*anc2+10*(1-t)*(1-t)*t*t*t*anc3+5*(1-t)*t*t*t*t*anc4+t*t*t*t*t*anc5;
}
