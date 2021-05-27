#include <iostream>
#include "DateClass.h"
int main() {
	Date a;
	std::cin >> a;
	std::cout << a.FindDayOfWeek(DayOfWeek::Friday) << '\n';
	std::cout << a.NextDay();
	return 0;
}