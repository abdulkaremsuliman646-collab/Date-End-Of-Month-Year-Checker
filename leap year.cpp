#include <iostream>
using namespace std;

struct stDate {
    short Day;
    short Month;
    short Year;
};

bool isLeapYear(short Year)
{
    return (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0));
}

short NumberOfDaysInAMonth(short Month, short Year)
{
    if (Month < 1 || Month > 12)
        return 0;

    short NumberOfDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : NumberOfDays[Month - 1];
}

short ReadDay()
{
    short Day;
    cout << "\nPlease enter a Day? ";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "Enter a Month (1-12): ";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "Enter a Year: ";
    cin >> Year;
    return Year;
}

stDate ReadFullDate()
{
    stDate Date;
    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();
    return Date;
}


bool isLastDayInMonth(stDate Date)
{
    return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}


bool isLastMonthInYear(short Month)
{
    return (Month == 12);
}

int main()
{
    cout << "Enter Date:\n";
    stDate Date1 = ReadFullDate();

    if (isLastDayInMonth(Date1))
        cout << "\nYes, Day is Last Day in Month.\n";
    else
        cout << "\nNo, Day is NOT Last Day in Month.\n";

    if (isLastMonthInYear(Date1.Month))
        cout << "Yes, Month is Last Month in Year.\n";
    else
        cout << "No, Month is NOT Last Month in Year.\n";

    system("pause>0");
    return 0;
}