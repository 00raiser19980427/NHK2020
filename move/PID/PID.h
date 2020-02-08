/*
 * PID.h
 *
 *  Created on: 2020/02/08
 *      Author: 00raiser
 */

#ifndef HIROKI_PID_H_
#define HIROKI_PID_H_



class PID
{
	private:
	float *KP ;
	float *KI ;
	float *KD ;
	float i[2];
	float integral;


	public:
	PID(void){
		integral = 0;
		i[0]=0;
		i[1]=0;
	}
    void set_PID_constant(float kp,float ki,float kd);
	float PIDout(float,float);

};

#endif /* HIROKI_PID_H_ */
