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
	int temper = 8;
	int humid = 5;
	int windsp = 10;
	const int amountOfDays = 3;
	Forecast* week[amountOfDays];
	for (int i = 0; i < amountOfDays; i++) {
		week[i] = new AirForecast(location, date, temper + i * 2, windsp + i * 10, humid + i * 5);
		cout << endl << "Day: " << i + 1 << (*week[i]) << endl;
	}

	// average temperature

	int sum = 0;
	for (int i = 0; i < amountOfDays; i++) {
		sum += week[i]->GetTemp();
	}
	cout << "Average temperature: " << sum / amountOfDays << endl;


	// max windspeed

	int speed, day;
	int max = 0;
	for (int i = 0; i < amountOfDays; i++) {
		speed = week[i]->GetSpeed();
		if (speed > max) {
			max = speed;
			day = i;
		}
	}

	cout << "Highest wind speed of " << max << " is on " << date.GetDay() + day << "." << date.GetMonth() << "." << date.GetYear() << endl;

	// humidity check

	int maxh = week[0]->GetHumidity(), minh = week[0]->GetHumidity(), hum, mind = 0, maxd = 0;
	for (int i = 0; i < amountOfDays; i++) {
		hum = week[i]->GetHumidity();
		if (hum > maxh) {
			maxh = hum;
			maxd = i;
		}
		if (hum < minh) {
			minh = hum;
			mind = i;
		}
	}

	cout << "Highest humidity of " << maxh << " is on day " << date.GetDay() + maxd
		<< " and the lowest humidity of " << minh << " is on day " << date.GetDay() + mind << endl;

	// приклад роботи віртуальної функції прінт
	cout << endl;
	delete week[0];
	week[0] = new Forecast(location, date); 
	cout << endl << *week[0] << endl;

	for (int i = 0; i < amountOfDays; i++) {
		delete week[i];
	}
}