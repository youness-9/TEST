#include <iostream>

using namespace std;

#include <bits/stdc++.h>


#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

#include <fstream>

struct DataInfo {

string accountnumber;

string Pincode;

string CleintNumber;

string Phone;

string balance;

};

  

string askloop()

{

  string ask;

  cout<<"what your account number: ";

  cin>>ask;

  return ask;

  

}

  

DataInfo askloopp(DataInfo one)

{

  DataInfo data;

  data.accountnumber=one.accountnumber;

  cout<<"\n what your new Pincode: ";

  cin>>data.Pincode;

  cout<<"\n what your new CleintNumber: ";

  cin>>data.CleintNumber;

  cout<<"\n what your new Phone: ";

  cin>>data.Phone;

  cout<<"\n what your new balance: ";

  cin>>data.balance;

  return data;

  

}

  

string Finalstring(DataInfo info)

{

  string s1=info.accountnumber+"#//#"+info.Pincode+"#//#"+info.CleintNumber+"#//#"+info.Phone+"#//#"+info.balance;

  return s1;

}

bool StringIfFound(string sword,string ask)

{

string spliter="#//#";

int pos=0;

string line;

while((pos = sword.find(spliter)) != std::string::npos)

{

  line=sword.substr(0,pos);

  if(line!="")

  {

    if(line==ask)

      {

        return true;

      }

  }

  sword.erase(0,pos+spliter.length());

}

return false;

}

  
  

vector <string> SpliteData(string sword)

{

vector <string> Data;

string spliter="#//#";

int pos=0;

string line;

while((pos = sword.find(spliter)) != std::string::npos)

{

  line=sword.substr(0,pos);

  if(line!="")

  {

    Data.push_back(line);

  }

  sword.erase(0,pos+spliter.length());

}

if(line!="")Data.push_back(line);

return Data;

}

  
  
  

vector <string> ReadFile()

{

  vector <string> lines;

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

  return lines;

}

  
  

vector <string> UpdateLine(string LineDelete,DataInfo data )

{

  vector <string> lines;

  fstream file;

  file.open("info.txt",ios::in);

  if(file.is_open())

  {

  string line;

  while(getline(file,line))

  {

  if(line==LineDelete)

    {

      line=Finalstring(askloopp(data));

      lines.push_back(line);

    }

  else

    {

      lines.push_back(line);

    }

  }

  

  }

  return lines;

}

void PrintRusultInFile(vector <string> lines)

{

  for(string &n:lines)

  {

    fstream file;

    file.open("info.txt",ios::out);

    if(file.is_open())

    {

      file<<n<<endl;

    }

  }

}

  
  

void printLine(vector <string> Data,DataInfo &DData)

{

  DData.accountnumber=Data[0];

  DData.Pincode=Data[1];

  DData.CleintNumber=Data[2];

  DData.Phone=Data[3];

  DData.balance=Data[4];

  

  cout<<"\n the following are the client details: "<<endl;

  cout<<"account number: "<<Data[0]<<endl;

  cout<<"Pin code: "<<Data[1]<<endl;

  cout<<"cleint Number: "<<Data[2]<<endl;

  cout<<"Phone: "<<Data[3]<<endl;

  cout<<"Balence: "<<Data[4]<<endl;

}

  
  

void Loop(vector <string> lines,string ask,DataInfo &data)

{

  for(string n:lines)

  {

    if(StringIfFound(n,ask))

    {

      printLine(SpliteData(n),data);

      PrintRusultInFile(UpdateLine(n,data));

      cout<<"\n the data updated sucssufly.";

    }

  }

}

  

int main()

{

DataInfo data;

string ask=askloop();

Loop(ReadFile(),ask,data);

  

return 0;

}