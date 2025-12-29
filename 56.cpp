#include <iostream>

using namespace std;

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>
struct stdate

{
	string DateName;
	int DateNum;
	short day;

	short mounth;

	short year;

	short DaysVication;
};

#include <fstream>
enum AllDays
{
	Mondy = 1,
	Tuesday = 2,
	Wensday = 3,
	thusday = 4,
	friday = 5,
	sturday = 6,
	sanday = 0,
};

int DayOfWeekOrder(short Day, short Month, short Year)
{
	int a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	// Gregorian:
	// 0:sun, 1:Mon, 2:Tue...etc
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
}
int DayOfWeekOrder(stdate date)
{
	return DayOfWeekOrder(date.day, date.mounth, date.year);
}

bool IsWeekend(int Day)
{
	if (Day == AllDays::sturday || Day == AllDays::sanday)
	{
		return true;
	}
	return false;
}

short ask(string ask)

{

	short num;

	cout << ask;

	cin >> num;

	return num;
}

bool year(short year)

{

	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

short days(short mounth, short Yeear)

{

	if (mounth < 1 || mounth > 12)

	{

		return 0;
	}

	short arry31[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	return (mounth == 2) ? (year(Yeear) ? 29 : 28) : arry31[mounth - 1];
}

stdate AddOneDay(stdate date, int HowManyDayYouWantToAdd)

{

	for (int i = 0; i < HowManyDayYouWantToAdd; i++)

	{

		if (date.day == days(date.mounth, date.year))

		{

			date.day = 1;

			if (date.mounth == 12)

			{

				date.mounth = 1;

				date.year += 1;
			}

			else

			{

				date.mounth += 1;
			}
		}

		else

		{

			date.day += 1;
		}
	}

	return date;
}

int PringNumdays(int askyear, int askkMounth, int askkDay)

{

	int counter = 0;

	for (int d = 1; d <= askkMounth - 1; d++)

	{

		counter += days(d, askyear);
	}

	counter += askkDay;

	return counter;
}

int NumDayVaction(stdate date)
{
	int counter = 0;
	int NumDays = date.DaysVication;
	for (int i = 0; i < NumDays; i++)
	{
		if (IsWeekend(DayOfWeekOrder(date)))
		{
			counter++;
		}
		date=AddOneDay(date,1);
	}
	return counter + date.DaysVication+1;
}
int main()

{

	while (true)

	{

		stdate date;

		date.year = ask("give me the year:");

		date.mounth = ask("\n give me the mounth:");

		date.day = ask("\n give me the day:");

		cout << endl

			 << endl

			 << endl;

		date.DaysVication = ask("\n how many vaction do you want: ");
		int DaysAfterAddWekkEnd = NumDayVaction(date);
		date = AddOneDay(date, DaysAfterAddWekkEnd);
		cout << "\n the real num days of vaction is: " << DaysAfterAddWekkEnd;
		cout << "return date: " << date.day << "/" << date.mounth << "/" << date.year;
		cout << endl;
	}

	return 0;
}