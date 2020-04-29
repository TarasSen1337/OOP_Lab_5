#pragma once
#include "forecast.h"
#include <iostream>

using namespace std;

class AirForecast :
	public Forecast
{
private:


protected:
	void PrintAir(ostream & out) const;

public:
	AirForecast(const char* location, const Date & date);
	~AirForecast();

};

