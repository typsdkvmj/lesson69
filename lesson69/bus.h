#pragma once
#include "main.h"

class Bus
{
private:
	int number;
	int tank;

public:
	Bus() : tank(0), number(0) {}
	Bus(int tank, int number) : tank(tank), number(number) {}
	~Bus() {}
	int getNumber();

	void setNumber(int number);

	int getTank();

	void setTank(int tank);
};