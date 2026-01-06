#include <iostream>

using namespace std;

#include <bits/stdc++.h>


#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

#include <fstream>

string askloop()

{

  string ask;

  cout<<"what your account number: ";

  cin>>ask;

  return ask;

  

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

  

vector <string> DeleteFile(string LineDelete)

{

  vector <string> lines;

  fstream file;

  file.open("info.txt",ios::in);

  if(file.is_open())

  {

  string line;

  while(getline(file,line))

  {

    if(line!=LineDelete)

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

  
  

void printLine(vector <string> Data)

{

  cout<<"\n the following are the client details: "<<endl;

  cout<<"account number: "<<Data[0]<<endl;

  cout<<"Pin code: "<<Data[1]<<endl;

  cout<<"cleint Number: "<<Data[2]<<endl;

  cout<<"Phone: "<<Data[3]<<endl;

  cout<<"Balence: "<<Data[4]<<endl;

}

  
  

void Loop(vector <string> lines,string ask)

{

  for(string n:lines)

  {

    if(StringIfFound(n,ask))

    {

      printLine(SpliteData(n));

      PrintRusultInFile(DeleteFile(n));

    }

  }

}

  

int main()

{

string ask=askloop();

Loop(ReadFile(),ask);

  

return 0;

}