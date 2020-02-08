/*
 * robot.h
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#ifndef HIROKI_ROBOT_H_
#define HIROKI_ROBOT_H_

#include "move/move.h"
#include <Libraries/localization/localization.hpp>

class robot {
private:
	LowlayerHandelTypedef *myhlow;
	int num;
	int t;
public:
	move *mv;
	robot(move *_mv):mv(_mv){
		num = 0;
		t = 0;
	};
	void PRflow();
};

#endif /* HIROKI_ROBOT_H_ */
