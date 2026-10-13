#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    cout << "Enter day, month and year: ";
    cin >> day >> month >> year;

    if (month < 1 || month > 12 || day < 1 || year < 1) {
        cout << "Invalid date";
    }
    else {
        int maxDays;

        if (month == 2) {
            if ((year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0))
                maxDays = 29;
            else
                maxDays = 28;
        }
        else if (month == 4 || month == 6 ||
                 month == 9 || month == 11) {
            maxDays = 30;
        }
        else {
            maxDays = 31;
        }

        if (day <= maxDays)
            cout << "Valid date";
        else
            cout << "Invalid date";
    }

    return 0;
}