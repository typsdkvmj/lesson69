#pragma once
#include "transport.h"

class Car:public Transport 
{
private:
	int power;
	int speed;

public:
	Car() : Transport(), power(0), speed(0) {}
	Car(int tank, int speed, int power) : Transport(tank), power(power), speed(speed) {}
	~Car() {}
	int getSpeed();

	void setSpeed(int speed);

	int getPower();

	void setPower(int power);

	
};

