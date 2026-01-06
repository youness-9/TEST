#include <iostream>

using namespace std;

#include <bits/stdc++.h>


#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

  
  
  

string askchar()

{

  cout<<"give me the string: ";

  string ask;

  getline(cin,ask);

  return ask;

}

  

void check(string ask,vector <string> &words)

{

  string test=" ";

  int counter=0;

  short pos=0;

  string sword;

  

while((pos = ask.find(test)) != std::string::npos)

  {

    sword=ask.substr(0,pos);

    if(sword!="")

    {

    words.push_back(sword);

    }

    ask.erase(0,pos+test.length());

  }   

    if(ask!="")

    {

      words.push_back(sword);;

    }

}

  
  
  

void Print(vector <string> words)

{

  for(string &n:words)

  {

    cout<<n<<endl;

  }

}

  

int main()

{

vector <string> words;

string vv=askchar();

check(vv,words);

Print(words);

return 0;

}