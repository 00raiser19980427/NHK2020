/*
 * routeSet.cpp
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#include <HIROKI/move/routeSet/routeSet.h>

routeSet::routeSet(){
	jud = 0;
	*x1 = 0;
	*y1 = 0;
}

bool routeSet::pointOutput(int *num , int *t){
	switch(*num){
/*-----------------------------------PR START-----------------------------------*/
		case 0:
			switch(jud){
				case 0:
					*time = (float)*t/1000;
					*x0 = *x1;
					*y0 = *y1;
					*x1 = route.bezier3(0, 0, 0, 0.5, time);
					*y1 = route.bezier3(0, 4, 4,   4, time);
					*yaw = 0;
					if(*time >= 1){
						*time = 0;
						jud = 1;
					}
					break;
				case 1:
					*time = (float)*t/1000;
					*x0 = *x1;
					*y0 = *y1;
					*x1 = route.bezier3(0.5, 1, 1, 1, time);
					*y1 = route.bezier3(  4, 4, 4, 8, time);
					*yaw = 0;
					if(*time >= 1){
						*time = 0;
						jud = fin_route;
					break;
					}
			}
			if(jud == fin_route){
				jud = 0;
				flag = true;
			}
			break;


		case 1:

			break;


		case 2:

			break;
/*-----------------------------------PR END-------------------------------------*/

/*----------------------------------TR START------------------------------------*/
		case 50:
			break;
		case 51:
			break;
		case 52:
			break;
/*-----------------------------------TR END-------------------------------------*/

/*-----------------------------zero position START------------------------------*/
		case 100:
			*x0 = 0;
			*y0 = 0;
			*x1 = 0;
			*y1 = 0;
			*yaw = 0;
			break;
/*-----------------------------zero position END--------------------------------*/
		}
	if(flag){
		flag = false;
		return true;
	}
	else return false;
}

