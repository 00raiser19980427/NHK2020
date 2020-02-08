/*
 * distributeSpeed.h
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#ifndef HIROKI_DISTRIBUTESPEED_H_
#define HIROKI_DISTRIBUTESPEED_H_

#include <math.h>

class distributeSpeed {

private:
	float PI = 3.1415926535;
	float RR = 0.365;
public:
	float V1;
	float V2;
	float V3;
	float V4;
	void distribute(float x,float y,float yaw,float now_theta);
};

#endif /* HIROKI_DISTRIBUTESPEED_H_ */
