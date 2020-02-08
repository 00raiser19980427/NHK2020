/*
 * move.cpp
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#include <HIROKI/move/move.h>

move::move(){
	flag = false;
}

bool move::moveRobot(int num , int t){
	if(rs.pointOutput(&num,&t)){
		flag = true;
	}
	ffx=ff.ffout(rs.x0,rs.x1);
	ffy=ff.ffout(rs.y0,rs.y1);
	pidx = PIDx.PIDout(myhlow->loca.GetX(), rs.x0);
	pidy = PIDy.PIDout(myhlow->loca.GetY(), rs.y0);
	pidyaw = PIDyaw.PIDout(myhlow->loca.GetYaw() , rs.yaw);
	dis.distribute(ffx+pidx, ffy+pidy, pidyaw, myhlow->loca.GetYaw());
	myhlow->M1.SetVelocity(dis.V1);
	myhlow->M2.SetVelocity(dis.V2);
	myhlow->M3.SetVelocity(dis.V3);
	myhlow->M4.SetVelocity(dis.V4);

	if(flag){
		flag = false;
		return true;
	}
	else return false;
}
