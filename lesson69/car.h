#pragma once
#include "main.h"

class Car
{
private:
	int power;
	int speed;
	int tank;

public:
	Car() : tank(0), power(0),speed(0) {}
	Car(int tank, int speed, int power) : tank(tank), power(power), speed(speed) {}
	~Car() {}
	int getSpeed();

	void setSpeed(int speed);

	int getPower();

	void setPower(int power);

	int getTank();

	void setTank(int tank);
};

