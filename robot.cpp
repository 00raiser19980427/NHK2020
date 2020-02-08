/*
 * robot.cpp
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#include <HIROKI/robot.h>


void robot::PRflow(){
	t++;
	switch(num){
		case 0:
			if(mv->moveRobot(1,t)){
				num = 1;
				t = 0;
			};
			break;
		case 1:
			if(mv->moveRobot(2,t)){
				num = 2;
				t = 0;
			};
			break;
		case 2:
			if(mv->moveRobot(3,t)){
				num = 3;
				t = 0;
			};
			break;
		case 100:
			mv->moveRobot(100,t);
			break;
	}
}


