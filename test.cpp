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



	short day2;

	short mounth2;

	short year2;

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
	sanday = 7,
};
int DayOfWeekOrder(short Day, short Month, short Year)
{
	int a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	// Gregorian:
	//0:sun, 1:Mon, 2:Tue...etc
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m)
		/ 12)) % 7;
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



	short arry31[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



	return (mounth == 2) ? (year(Yeear) ? 29 : 28) : arry31[mounth - 1];

}




stdate AddOneDay(stdate date)

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



int calculateDefrance(stdate date)

{

	int counter1 = 0;

	int counter2 = 0;

	int countermoreyears = 0;



	counter1 += PringNumdays(date.year2, date.mounth2, date.day2);

	counter2 += PringNumdays(date.year, date.mounth, date.day);

	if (date.year2 == date.year)

	{

		return counter1 - counter2;

	}

	else

	{

		for (int i = 0; i <= date.year2 - date.year; i++)

		{



			counter1 += PringNumdays(date.year2, date.mounth2, date.day2);

			counter2 += PringNumdays(date.year + i, date.mounth, date.day);

			countermoreyears += (counter1 - counter2) + 360;

		}

	}

	return countermoreyears;



}

int NumDayVaction(stdate date)
{
	int counter = 0;
	int NumDays = calculateDefrance(date);
	for (int i = 1; i < NumDays; i++)
	{
		if (!IsWeekend(DayOfWeekOrder(date)))
		{
			counter++;
		}
		date.day++;
	}
	return counter;
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



		date.year2 = ask("\n give me the year:");

		date.mounth2 = ask("\n give me the mounth:");

		date.day2 = ask("\n give me the day:");

		cout << "\n the defrance is " << calculateDefrance(date);

		cout<<"\n the real num days of vaction is: "<<NumDayVaction(date);

		cout << endl;

	}



	return 0;

}