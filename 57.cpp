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
struct stdate

{
	short day;

	short mounth;

	short year;

	short day2;

	short mounth2;

	short year2;
};

bool CheckTheDateIsAferDate2(stdate date)
{

	return (date.year>date.year2)? true:(date.mounth>date.mounth2)?true:(date.day>date.day2)?true:false;
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

	if(date.year==date.year2&&date.mounth==date.mounth2&&date.day==date.day2)
	{
		cout<<"0";
	}
	else
	{
	(CheckTheDateIsAferDate2(date))?cout<<1:cout<<-1;	
	}
}
	return 0;
}
