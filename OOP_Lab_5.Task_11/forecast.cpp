#include "forecast.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
char* Forecast::CopyText(const char* src)
{
	char* text = new char[strlen(src) + 1];
	strcpy_s(text, strlen(src) + 1, src);
	return text;
}

void Forecast::PrintWeather(ostream& out) const
{
	out << this->GetLocation() << endl;
}


Forecast::Forecast(const char* location, const Date & date)
{
	printf("Forecast::Forecast(const char* %s, const Date & date)\n", location);
	this->location = CopyText(location);
	this->date = new Date(date);
}

Forecast::~Forecast()
{
	cout << "Forecast::~Forecast()" << endl;
}

const char* Forecast::GetLocation() const
{
	return this->location;
}

const int Forecast::GetTemp()
{
	return 0;
}

const int Forecast::GetSpeed()
{
	return 0;
}

const int Forecast::GetHumidity()
{
	return 0;
}

ostream& operator<<(ostream& out, const Forecast& forecast)
{
	forecast.PrintWeather(out);
	return out;
}





