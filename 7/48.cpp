#include <iostream>

using namespace std;

#include <bits/stdc++.h>


#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

#include <fstream>

bool askloop()

{

  string ask;

  cout<<"do you want add more add Y if yes: ";

  cin>>ask;

  if(ask=="y"||ask=="Y")

  {

  return true;

  }

  else

  {return false;}

}

  
  

struct DataPersons{

  string AcountNumber;

  int Pincode;

  string Name;

  int PhoneNumber;

  int Balance;

};

  
  
  

DataPersons askchar(DataPersons Person1)

{

  cout<<"give me you AcountNumber: ";

  cin>>Person1.AcountNumber;

  cout<<"\n give me you Pincode: ";

  cin>>Person1.Pincode;

  cout<<"\n give me you Name: ";

  cin>>Person1.Name;

  cout<<"\n give me you PhoneNumber: ";

  cin>>Person1.PhoneNumber;

  cout<<"\n give me you Balance: ";

  cin>>Person1.Balance;

  return Person1;

}

  

string Printdata(DataPersons Person1)

{

  

string ask=Person1.AcountNumber+"#//#"+to_string(Person1.Pincode)+"#//#"+Person1.Name+"#//#"+ to_string(Person1.PhoneNumber)+"#//#"+to_string(Person1.Balance);

return ask;

}

  

void files(string data)

{

  fstream file;

  file.open("info.txt",ios::out|ios::app);

  

    if(file.is_open())

    {

      file<<data<<endl;

    }

}

  
  
  

int filelines()

{

  int num=0;

  fstream file;

  file.open("info.txt",ios::in);

  if(file.is_open())

  {

    string line;

    while(getline(file,line))

    {

      num++;

    }

  }

  return num;

}

  

void filePushInvictor(vector <string> &lines)

{

  fstream file;

  file.open("info.txt",ios::in);

  if(file.is_open())

  {

    string line;

    while(getline(file,line))

    {

      lines.push_back(line);

    }

  }

}

  

vector <string> stringSplite(string line)

{

  short pos=0;

  vector <string> lines;

  string superator="#//#";

  string sword;

  while ((pos = line.find(superator)) != std::string::npos)

  {

    sword=line.substr(0,pos);

    if(sword!="")

    {

      lines.push_back(sword);

    }line.erase(0,pos+superator.length());

  }

  if(line!="") lines.push_back(line);

  return lines;

}

  
  

void PrintGood(int Numcull,vector <string> &lines)

{

  printf("                    cleint list is %d                    ",Numcull);

  cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------\n";

  cout<<"|"<<setw(20)<<"account number";

  cout<<"|"<<setw(20)<<"Pin code";

  cout<<"|"<<setw(20)<<"cleint Number";

  cout<<"|"<<setw(20)<<"Phone";

  cout<<"|"<<setw(20)<<"Balence";

  cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------\n";

  for(string &n:lines)

  {

    for(string &z:stringSplite(n))

    {

      cout<<"|"<<setw(20)<<z;

    }

    cout<<endl;

  }

}

  
  

int main()

{

vector <string> lines;

while(askloop())

{

  DataPersons Person1;

  Person1=askchar(Person1);

  files(Printdata(Person1));

}

filePushInvictor(lines);

PrintGood(filelines(),lines);

return 0;

}