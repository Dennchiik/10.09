#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysBetweenDates(int day1, int month1, int year1, int day2, int month2, int year2) {
    int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (isLeapYear(year1))
        daysInMonth[2] = 29;
    if (isLeapYear(year2))
        daysInMonth[2] = 29;

    if (year1 < year2 || (year1 == year2 && month1 < month2) || (year1 == year2 && month1 == month2 && day1 <= day2)) {
        int days = 0;

        for (int i = month1; i <= 12; ++i) {
            if (i == month1) {
                days += daysInMonth[i] - day1 + 1;
            }
            else {
                days += daysInMonth[i];
            }
        }

        for (int i = year1 + 1; i < year2; ++i) {
            if (isLeapYear(i)) {
                days += 366;
            }
            else {
                days += 365;
            }
        }

        for (int i = 1; i < month2; ++i) {
            if (i == month2 - 1) {
                days += day2;
            }
            else {
                days += daysInMonth[i];
            }
        }

        return days;
    }
    else {
        return -1;
    }
}

int main() {
    int day1, month1, year1, day2, month2, year2;

    std::cout << "Введите первую дату (день месяц год): ";
    std::cin >> day1 >> month1 >> year1;

    std::cout << "Введите вторую дату (день месяц год): ";
    std::cin >> day2 >> month2 >> year2;

    int difference = daysBetweenDates(day1, month1, year1, day2, month2, year2);

    if (difference == -1) {
        std::cout << "Некорректные входные данные." << std::endl;
    }
    else {
        std::cout << "Разность в днях между датами: " << difference << std::endl;
    }

    return 0;
}
