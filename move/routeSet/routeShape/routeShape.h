/*
 * rootShape.h
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#ifndef HIROKI_ROUTESHAPE_H_
#define HIROKI_ROUTESHAPE_H_

#include <math.h>

class routeShape {
public:
	float bezier3(float anc0, float anc1, float anc2, float anc3, float t);
	float bezier5(float anc0, float anc1, float anc2, float anc3, float anc4,float anc5,float t);
};

#endif /* HIROKI_ROUTESHAPE_H_ */
