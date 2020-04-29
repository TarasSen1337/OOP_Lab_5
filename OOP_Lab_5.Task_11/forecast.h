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

protected:
	virtual void PrintWeather(ostream& out) const;

public:
	Forecast(const char* location, const Date& date);
	virtual ~Forecast();

	const char* GetLocation() const;
	virtual const int GetTemp();
	virtual const int GetSpeed();
	virtual const int GetHumidity();

	friend ostream& operator<<(ostream& out, const Forecast& v);
};