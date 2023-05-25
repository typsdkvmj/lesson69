#pragma once
#include "main.h"

class Truck {
private:
	int tank;
	int weight;

public:

	Truck() : tank(0), weight(0) {}
	Truck(int tank, int weight) : tank(tank), weight(weight) {}
	~Truck() {}
	int getWeight(){};

	void setWeight(int weight ){};

	int getTank(){};

	void setTank(int tank){};
};
