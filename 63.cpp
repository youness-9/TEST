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
	string day;

	string mounth;

	string year;
};


void test(string word,vector <string > &Addwords)

{

  while (true)

  { 

    int i=word.find('/');

    if(i==-1)

    break;

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
	dateLineByLine.day=DatesSpile[0];
	dateLineByLine.mounth=DatesSpile[1];
	dateLineByLine.year=DatesSpile[2];
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
		cout<<date.day<<"\\"<< date.mounth<<"\\"<<date.year;
		

	}

	return 0;
}