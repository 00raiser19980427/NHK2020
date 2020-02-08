/*
 * routeSet.h
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#ifndef HIROKI_ROUTESET_H_
#define HIROKI_ROUTESET_H_

#include "routeShape/routeShape.h"



class routeSet {
private:
	float *time;					//for function of route //200count per 1sec //decide time
	bool  flag;					//for change phase of one cycle route
	int   jud;					//for change function of route
	const int fin_route=10000;	//finish phase number
	routeShape route;

public:
	routeSet();

	float *x0;	//current position
	float *x1;	//before position
	float *y0;	//current position
	float *y1;	//next position
	float *yaw;	//next angle //if you change angle of machine, you have to integral "yaw"

	bool pointOutput(int *num , int *t); 	//calculate necessary Volume(x0,x1,y0,y1)

};

#endif /* HIROKI_ROUTESET_H_ */
