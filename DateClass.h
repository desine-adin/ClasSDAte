#pragma once
#ifndef DATECLASS_H
#define DATECLASS_H
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <string>
enum class DayOfWeek {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};
int CreateDayOfWeekId(DayOfWeek temp) {
	switch (temp) {
	case DayOfWeek::Monday:
		return 1;
	case DayOfWeek::Tuesday:
		return 2;
	case DayOfWeek::Wednesday:
		return 3;
	case DayOfWeek::Thursday:
		return 4;
	case DayOfWeek::Friday:
		return 5;
	case DayOfWeek::Saturday:
		return 6;
	case DayOfWeek::Sunday:
		return 7;
	}
}
DayOfWeek CreateDayOfWeek(int temp) {
	switch (temp) {
	case 1:
		return DayOfWeek::Monday;
	case 2:
		return DayOfWeek::Tuesday;
	case 3:
		return DayOfWeek::Wednesday;
	case 4:
		return DayOfWeek::Thursday;
	case 5:
		return DayOfWeek::Friday;
	case 6:
		return DayOfWeek::Saturday;
	case 7:
		return DayOfWeek::Sunday;
	}
}

enum class Months {
	January,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};
std::ostream& operator<< (std::ostream &out, const DayOfWeek &temp)
{
	switch (temp) {
	case DayOfWeek::Monday:
		out << "Monday";
		break;
	case DayOfWeek::Tuesday:
		out << "Tuesday";
		break;
	case DayOfWeek::Wednesday:
		out << "Wendnesday";
		break;
	case DayOfWeek::Thursday:
		out << "Thursday";
		break;
	case DayOfWeek::Friday:
		out << "Friday";
		break;
	case DayOfWeek::Saturday:
		out << "Saturday";
		break;
	case DayOfWeek::Sunday:
		out << "Sunday";
		break;
	}
	return out;
}
Months CreateMonth(int temp) {
	switch (temp) {
	case 1:
		return Months::January;
	case 2:
		return Months::February;
	case 3:
		return Months::March;
	case 4:
		return Months::April;
	case 5:
		return Months::May;
	case 6:
		return Months::June;
	case 7:
		return Months::July;
	case 8:
		return Months::August;
	case 9:
		return Months::September;
	case 10:
		return Months::October;
	case 11:
		return Months::November;
	case 12:
		return Months::December;
	}
}
std::string CreateStringFromMonth(Months temp) {
	switch (temp) {
	case Months::January:
		return "January";
	case Months::February:
		return "February";
	case Months::March:
		return "March";
	case Months::April:
		return "April";
	case Months::May:
		return "May";
	case Months::June:
		return "June";
	case Months::July:
		return "July";
	case Months::August:
		return "August";
	case Months::September:
		return "September";
	case Months::October:
		return "October";
	case Months::November:
		return "November";
	case Months::December:
		return "December";
	}
}
class Date {
private:
	int number;
	Months month;
public:
	Date(Months month_ = Months::January, int number_ = 1) {
		try {
			switch (month_) {
			case Months::January:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case Months::February:
				if (number_ > 28) {
					throw - 1;
				}
				break;
			case Months::March:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case Months::April:
				if (number_ > 30) {
					throw - 1;
				}
				break;
			case Months::May:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case Months::June:
				if (number_ > 30) {
					throw - 1;
				}
				break;
			case Months::July:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case Months::August:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case Months::September:
				if (number_ > 30) {
					throw - 1;
				}
				break;
			case Months::October:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case Months::November:
				if (number_ > 30) {
					throw - 1;
				}
				break;
			case Months::December:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			default:
				throw - 2;
			}
		}
		catch (int MistakeIndex)
		{
			if (MistakeIndex == -1) {
				std::cerr << "Incorrect day" << '\n';
			}
			else if (MistakeIndex == -2) {
				std::cerr << "Incorrect month" << '\n';
			}
		}
		month = month_;
		number = number_;
	}
	Date(int month_ = 1, int number_ = 1) {
		try {
			switch (month_) {
			case 1:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case 2:
				if (number_ > 28) {
					throw - 1;
				}
				break;
			case 3:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case 4:
				if (number_ > 30) {
					throw - 1;
				}
				break;
			case 5:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case 6:
				if (number_ > 30) {
					throw - 1;
				}
				break;
			case 7:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case 8:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case 9:
				if (number_ > 30) {
					throw - 1;
				}
				break;
			case 10:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			case 11:
				if (number_ > 30) {
					throw - 1;
				}
				break;
			case 12:
				if (number_ > 31) {
					throw - 1;
				}
				break;
			default:
				throw - 2;
			}
		}
		catch (int MistakeIndex)
		{
			if (MistakeIndex == -1) {
				std::cerr << "Incorrect day" << '\n';
			}
			else if (MistakeIndex == -2) {
				std::cerr << "Incorrect month" << '\n';
			}
		}
		month = CreateMonth(month_);
		number = number_;
	}
	~Date() {

	}
	Date NextDay() {
		Date* next;
		switch (month) {
		case Months::January:
			if (number == 31) {
				next = new Date(Months::February, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::February:
			if (number == 28) {
				next = new Date(Months::March, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::March:
			if (number == 31) {
				next = new Date(Months::April, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::April:
			if (number == 30) {
				next = new Date(Months::May, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::May:
			if (number == 31) {
				next = new Date(Months::June, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::June:
			if (number == 30) {
				next = new Date(Months::July, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::July:
			if (number == 31) {
				next = new Date(Months::August, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::August:
			if (number == 31) {
				next = new Date(Months::September, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::September:
			if (number == 30) {
				next = new Date(Months::October, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::October:
			if (number == 31) {
				next = new Date(Months::November, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::November:
			if (number == 30) {
				next = new Date(Months::December, 1);
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		case Months::December:
			if (number == 31) {
				std::cout << "incorrect date";
			}
			else {
				next = new Date(month, number + 1);
			}
			break;
		}
	}
	Date PreviousDay() {
		Date* prev;
		switch (month) {
		case Months::January:
			if (number == 1) {
				std::cout << "incorrect day";
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::February:
			if (number == 1) {
				prev = new Date(Months::January, 31);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::March:
			if (number == 1) {
				prev = new Date(Months::February, 28);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::April:
			if (number == 1) {
				prev = new Date(Months::March, 31);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::May:
			if (number == 1) {
				prev = new Date(Months::April, 30);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::June:
			if (number == 1) {
				prev = new Date(Months::May, 31);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::July:
			if (number == 1) {
				prev = new Date(Months::July, 30);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::August:
			if (number == 1) {
				prev = new Date(Months::August, 31);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::September:
			if (number == 1) {
				prev = new Date(Months::September, 31);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::October:
			if (number == 1) {
				prev = new Date(Months::October, 30);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::November:
			if (number == 1) {
				prev = new Date(Months::November, 31);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		case Months::December:
			if (number == 1) {
				prev = new Date(Months::November, 30);
			}
			else {
				prev = new Date(month, number - 1);
			}
			break;
		}
	}
	DayOfWeek FindDayOfWeek(DayOfWeek FirstDay) {
		int MonthsId = CreateDayOfWeekId(FirstDay);
		switch (month) {
		case Months::January:
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::February:
			MonthsId += 3;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::March:
			MonthsId += 3;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::April:
			MonthsId += 6;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::May:
			MonthsId += 1;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::June:
			MonthsId += 4;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::July:
			MonthsId += 6;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::August:
			MonthsId += 2;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::September:
			MonthsId += 5;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::October:
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::November:
			MonthsId += 2;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		case Months::December:
			MonthsId += 4;
			MonthsId %= 7;
			MonthsId = MonthsId + number % 7 - 1;
			break;
		}
		return CreateDayOfWeek(MonthsId % 7);
	}
	friend std::ostream& operator<< (std::ostream &out, const Date &date);
	friend std::istream& operator>> (std::istream &in, Date &date);
};
std::ostream& operator<< (std::ostream &out, const Date &date)
{
	out << "Month: " << CreateStringFromMonth(date.month) << ", " << "Day: " << date.number;
	return out;
}
std::istream& operator>> (std::istream &in, Date &date)
{
	int IdOfMonths;
	int day;
	in >> IdOfMonths;
	in >> day;
	Date a(IdOfMonths, day);
	date = a;
	return in;
}
#endif // DATECLASS_H
