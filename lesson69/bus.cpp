#include "bus.h"

int Bus::getNumber() {
	return number;
}

void Bus::setNumber(int number) {
	if (number > 0) {
		this->number = number;
	}
}

int Bus::getTank() {
	return tank;
}

void Bus::setTank(int tank) {
	if (tank > 0) {
		this->tank = tank;
	}
}