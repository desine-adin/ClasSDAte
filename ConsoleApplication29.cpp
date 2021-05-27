#include <iostream>
#include "DateClass.h"
int main() {
	Date a(10, 6);
	std::cout << a.FindDayOfWeek(DayOfWeek::Friday);
	return 0;
}