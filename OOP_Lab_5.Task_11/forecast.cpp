#include "forecast.h"
#include <stdlib.h>
#include <stdio.h>
char* Forecast::CopyText(const char* src)
{
	char* text = new char[strlen(src) + 1];
	strcpy_s(text, strlen(src) + 1, src);
	return text;
}

Forecast::Forecast(const char* location, const Date & date)
{
	printf("Forecast::Forecast(const char* %s, const Date & date)\n", location);
	this->location = CopyText(location);
	this->date = new Date(date);
}

Forecast::~Forecast()
{

}







