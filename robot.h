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
	int num;						//"num" is each phase number
	int t;							//Add one per 5[msec] ,every calling
public:
	move *mv;
	robot(move *_mv):mv(_mv){	//Initialize
		num = 0;				//If you want to "zero_position", change to "num = 100"
		t = 0;
	};
	void PRflow();				//Called in "while ()" of main.cpp //for pass_robot
	void TRflow();				//Called in "while ()" of main.cpp //for try_robot
	void zeroPosition();		//Called in "while ()" of main.cpp //for zero position
};

#endif /* HIROKI_ROBOT_H_ */
