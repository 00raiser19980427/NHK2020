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
	float t_set;
	float time;
	bool flag;
	int jud;
	const int fin_route=10000;
	routeShape route;

public:
	routeSet();

	float x0;
	float x1;
	float y0;
	float y1;
	float yaw;

	bool pointOutput(int num , int t);
};

#endif /* HIROKI_ROUTESET_H_ */
