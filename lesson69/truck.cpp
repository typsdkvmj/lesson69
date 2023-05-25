#include "truck.h"

int Truck::getWeight() {
	return weight;
}
int Truck::getTank() {
	return tank;
}

void Truck::setWeight(int weight) {
	if (weight > 0) {
		this->weight = weight;
	}
}

void Truck::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}



