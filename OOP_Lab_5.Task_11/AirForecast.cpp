#include "AirForecast.h"
#include <stdio.h>

void AirForecast::PrintAir(ostream& out) const
{

}

AirForecast::AirForecast(const char* location, const Date & date) : Forecast(location, date)
{
	printf("AirForecast::Forecast(const char* %s, const Date & date)\n", location);
}

AirForecast::~AirForecast()
{
}
