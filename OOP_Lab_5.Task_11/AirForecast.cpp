#include "AirForecast.h"
#include <stdio.h>


void AirForecast::PrintWeather(ostream& out) const
{
	out << endl
		<< "Location:" << this->GetLocation() <<  endl
		<< "Humidity: " << this->humidity << endl
		<< "Wind Speed: " << this->windsp << endl
		<< "Temperature: " << this->temperature << endl ;

}

AirForecast::AirForecast(
	const char* location,
	const Date & date,
	int temperature,
	int windsp,
	int humidity) : Forecast(location, date)
{
	printf("AirForecast::Forecast(const char* %s, const Date & date, int temperature, int windsp, int humidity)\n", location);
	this->temperature = temperature;
	this->humidity = humidity;
	this->windsp = windsp;
}

AirForecast::~AirForecast()
{

}

const int AirForecast::GetHumidity()
{
	return this->humidity;
}

const int AirForecast::GetTemp()
{
	return this->temperature;
}

const int AirForecast::GetSpeed()
{
	return this->windsp;
}
