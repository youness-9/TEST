#include <iostream>

using namespace std;

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>
short ask(string ask)

{

	short num;

	cout << ask;

	cin >> num;

	return num;
}
struct stdate1

{
	short day;

	short mounth;

	short year;
};

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

bool CheckTheDateIsAferDate2(stdate1 date,stdate1 date2)
{

	return (date.year > date2.year) ? true : (date.mounth > date2.mounth) ? true
										 : (date.day > date2.day)		  ? true
																		  : false;

															
}


stdate1 AddOneDay1(stdate1 date, int HowManyDayYouWantToAdd)

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

int CompareDates(stdate1 date,stdate1 date2)
{
	int counter=0;
	if(CheckTheDateIsAferDate2(date,date2))
	{
	while(CheckTheDateIsAferDate2(date,date2))
	{
		date2=AddOneDay1(date2,1);
		counter++;
	}
	return counter;
	}
	else
	{
		while(!CheckTheDateIsAferDate2(date,date2))
		{
			date=AddOneDay1(date,1);
			counter++;
		}
			return counter;
	}
}
int main()

{

	while (true)

	{

		stdate1 date;
		stdate1 date2;

		date.year = ask("\ngive me the year:");

		date.mounth = ask("\n give me the mounth:");

		date.day = ask("\n give me the day:");

		cout << endl

			 << endl

			 << endl;

		date2.year = ask("\n give me the year:");

		date2.mounth = ask("\n give me the mounth:");

		date2.day = ask("\n give me the day:");

		CheckTheDateIsAferDate2(date,date2) ? cout << "yes date1 after date2" : cout << "no date1 not after date2";
		cout << endl;
		cout<<"\n compare rusult is : "<<CompareDates(date,date2);
	}

	return 0;
}