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
struct stPeriod1

{
	short day;

	short mounth;

	short year;

};
struct stPeriod2

{	
	short day2;

	short mounth2;

	short year2;
};




bool CheckIfOverLaap(stPeriod1 Period1,stPeriod1 Period11,stPeriod2 Period2,stPeriod2 Period22,int &counter)
{
	if(Period1.year!=Period2.year2&&Period1.mounth!=Period2.mounth2)
	{
	return false;
	}
	else
	{
	for(int i=Period1.day;i<Period11.day;i++)
	{
        counter++;
		for(int z=Period2.day2;z<Period22.day2;z++)
		{
			if(i==z)
			{
			return true;
			}
		}
	}
	return false;
}
}
int main()

{

	while (true)

	{

		stPeriod1 Period1;
		stPeriod1 Period11;
		
		stPeriod2 Period2;
		stPeriod2 Period22;
		
		cout<<"\n enter peroid 1 \n ";

		Period1.year = ask("give me the year:");

		Period1.mounth = ask("\n give me the mounth:");

		Period1.day = ask("\n give me the day:");

		Period11.year = ask("give me the year:");

		Period11.mounth = ask("\n give me the mounth:");

		Period11.day = ask("\n give me the day:");

		cout << endl

			 << endl

			 << endl;
		cout<<"enter peroid 2 \n";
	
		Period2.year2 = ask("\n give me the year:");

		Period2.mounth2 = ask("\n give me the mounth:");

		Period2.day2 = ask("\n give me the day:");
		
		Period22.year2 = ask("\n give me the year:");

		Period22.mounth2 = ask("\n give me the mounth:");

		Period22.day2 = ask("\n give me the day:");

        int counter=0;
		if(CheckIfOverLaap( Period1, Period11, Period2, Period22,counter))
		{
			cout<<"\n perdion over lap the number is: "<<counter;
		}
		else
		{
			cout<<"\n perdion not over lap \n";
		}
}
	return 0;
}
