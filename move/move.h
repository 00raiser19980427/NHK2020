/*
 * move.h
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#ifndef HIROKI_MOVE_H_
#define HIROKI_MOVE_H_

#include "routeSet/routeSet.h"
#include "PID/PID.h"
#include "feedForward/feedForward.h"
#include "distributeSpeed/distributeSpeed.h"

#include <Libraries/localization/localization.hpp>
#include "Libraries/LowlayerHandel.hpp"

class move {
private:
	LowlayerHandelTypedef *myhlow;
	routeSet rs;
	feedForward ff;
	distributeSpeed dis;
	float ffx;
	float ffy;
	float pidx;
	float pidy;
	float pidyaw;
	bool flag;
public:
	move();
	PID PIDx;
	PID PIDy;
	PID PIDyaw;
	bool moveRobot(int num , int t); 	//called in robot.cpp
										//"num" is each phase number
										//num = 0~49 for PR , 50~99 for TR
										//Add one per 5 [msec] ,every calling
	move(LowlayerHandelTypedef *hlow):myhlow(hlow){};//Initialize
};

#endif /* HIROKI_MOVE_H_ */
