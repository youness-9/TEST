#include <iostream>

using namespace std;

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>
string ask(string ask)

{

	string num;

	cout << ask;

	cin >> num;

	return num;
}
struct stdate

{
	int day;

	int mounth;

	int year;
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
stdate GitYear(stdate date)
{
	 if(to_string(date.day).length()==4)
	{
		int fastInt=date.year;
		date.year=date.day;
		date.day=fastInt;
	}
	 
	if(to_string(date.mounth).length()==4)
	{
		int fastInt=date.year;
		date.year=date.mounth;
		date.mounth=fastInt;
	}
	 return date;
}
stdate CheckDateIsday(stdate date)
{
	for(int i=0;i<days(date.day,date.year);i++)
	{
		if(date.day==i)
			{
				int fastInt=date.day;
				date.day=date.mounth;
				date.mounth=fastInt;
				return date;
			}
	
	}
		date.day=date.day;
		date.mounth=date.mounth;
		return date;
}


void test(string word,vector <string > &Addwords)

{

  while (true)

  { 

    int i=word.find('/');

    if(i==-1)
	{
		i=word.find('-');
	}
	else
	{
    break;
	}

      Addwords.push_back(word.substr(0,i));

      word.erase(0,i+1);

  }

  if(0==0)

  {

    Addwords.push_back(word);

  }

}

stdate SpliteStringDateToStruct(string date)
{
	stdate dateLineByLine;	
	vector <string> DatesSpile;
	test(date,DatesSpile);
	dateLineByLine.day=stoi(DatesSpile[0]);
	dateLineByLine.mounth=stoi(DatesSpile[1]);
	dateLineByLine.year=stoi(DatesSpile[2]);
	return dateLineByLine;
}


int main()

{

	while (true)

	{
		stdate date;
		string askk;
		askk= ask("\n give me the date:");
		cout << endl;
		date=SpliteStringDateToStruct(askk);
		date=GitYear(date);	
		date=CheckDateIsday(date);
		cout<<date.day<<"\\"<< date.mounth<<"\\"<<date.year;
		

	}

	return 0;
}