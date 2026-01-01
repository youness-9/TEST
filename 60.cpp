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
struct stDays

{
	short day;

	short mounth;

	short year;

};
struct stPeriod
{
	stDays Period1;
	stDays Period2;
	stDays Period11;
	
};




bool CheckIfOverLaap(stPeriod Period)
{
	if(Period.Period1.year!=Period.Period11.year||Period.Period1.mounth!=Period.Period11.mounth)
	{
	return false;
	}
	else
	{
	for(int i=Period.Period1.day;i<Period.Period2.day;i++)
	{

			if(i==Period.Period11.day)
			{
			return true;
			}
	}
	}
	return false;
}

int main()

{

	while (true)

	{

		stPeriod Period;

		cout<<"\n enter peroid 1 \n ";

		Period.Period1.year = ask("give me the year:");

		Period.Period1.mounth = ask("\n give me the mounth:");

		Period.Period1.day = ask("\n give me the day:");

		Period.Period2.year = ask("give me the year:");

		Period.Period2.mounth = ask("\n give me the mounth:");

		Period.Period2.day = ask("\n give me the day:");

		cout << endl

			 << endl

			 << endl;
		cout<<"enter peroid 2 \n";
	
		Period.Period11.year = ask("\n give me the year:");

		Period.Period11.mounth = ask("\n give me the mounth:");

		Period.Period11.day = ask("\n give me the day:");
		

		if(CheckIfOverLaap(Period))
		{
			cout<<"\n perdion over lap \n";
		}
		else
		{
			cout<<"\n perdion not over lap \n";
		}
}
	return 0;
}
