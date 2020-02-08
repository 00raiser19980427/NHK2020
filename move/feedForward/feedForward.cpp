/*
 * feedForward.cpp
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#include <HIROKI/move/feedForward/feedForward.h>

float feedForward::ffout(float *t0 , float *t1){
	return (*t1 - *t0)/0.005;	//0.005 is Control cycle time[5msec]
}
