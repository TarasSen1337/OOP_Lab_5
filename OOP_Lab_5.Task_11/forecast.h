#pragma once
#include <stdlib.h>
#include <cstring>
#include "Date.h"
class Forecast
{
private:
	char* location;
	Date* date;
	char* CopyText(const char* src);

public:
	Forecast(const char* location, const Date& date);
	~Forecast();

	
};