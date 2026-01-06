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

bool CheckMounthIsValide(stdate1 date)
{
	for(int i=0;i<12;i++)
	{
		if(date.mounth==i)
			{
				return true;
			}

	}
	return false;
}


bool CheckDateIsValide(stdate1 date)
{
	for(int i=0;i<days(date.mounth,date.year);i++)
	{
		if(date.day==i)
			{
				return true;
			}

	}
	return false;
}



int main()

{

	while (true)

	{

		stdate1 date;

		date.year = ask("\ngive me the year:");

		date.mounth = ask("\n give me the mounth:");

		date.day = ask("\n give me the day:");

		cout << endl;
		if(CheckMounthIsValide(date)&&CheckDateIsValide(date))
		{
			cout<<"is valde date";
		}
		else
		{
			cout<<"is not";
		}
	}

	return 0;
}