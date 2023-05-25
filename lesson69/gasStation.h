#pragma once
#include "truck.h"
#include "car.h"
#include "bus.h"

class GasStation
{
public: 
	static int calculateTotalGas(Bus* buses, int busSize,
		Truck* trucks, int truckSize, Car* cars, int carSize);
		
};