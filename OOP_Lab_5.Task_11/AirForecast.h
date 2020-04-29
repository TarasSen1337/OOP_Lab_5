#pragma once
#include "forecast.h"
#include <iostream>

using namespace std;

class AirForecast :
	public Forecast
{
private:
	int temperature;
	int windsp;
	int humidity;

protected:
	void PrintWeather(ostream& out) const  override;

public:
	AirForecast(const char* location, const Date & date, int temperature, int windsp, int humidity);
	~AirForecast();

	const int GetHumidity();
	const int GetTemp() override;
	const int GetSpeed() override;

};

