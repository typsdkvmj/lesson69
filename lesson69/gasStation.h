#pragma once
#include "truck.h"
#include "car.h"
#include "bus.h"

class GasStation
{
public: 
	static int calculateTotalGas(Bus* buses, int busSize,
		Truck* trucks, int truckSize, Car* cars, int carSize) {
		int total = 0;

		for (int i = 0; i < busSize; i++)
		{
			total += buses[i].getTank();
		}


		for (int i = 0; i < truckSize; i++)
		{
			total += trucks[i].getTank();
		}


		for (int i = 0; i < carSize; i++)
		{
			total += cars[i].getTank();
		}
	}
};

