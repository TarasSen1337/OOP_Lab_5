#include <iostream>
#include <stdlib.h>
#include "forecast.h"
#include "AirForecast.h"

using namespace std;

void Program();

int main() {
	cout << "Start" << endl;

	Program();

	return 0;
}

void Program() {
	char location[] = "Lviv, Ukraine";
	Date date(2020, 04, 20);

	const int amountOfDays = 3;
	Forecast* air[amountOfDays];
	Forecast* prec[amountOfDays];
	air[0] = new AirForecast(location, date);
	prec[0] = new AirForecast(location, date);

	air[1] = new AirForecast(location, date);
	prec[1] = new AirForecast(location, date);

	air[2] = new AirForecast(location, date);
	prec[2] = new AirForecast(location, date);


	for (int i = 0; i < amountOfDays; i++) {
		delete air[i];
		delete prec[i];
	}
}