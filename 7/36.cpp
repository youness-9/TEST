#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

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

  

void check(string ask)

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

        counter++;

        }

        ask.erase(0,pos+test.length());

    }      

         if(ask!="")

         {

            counter++;

         }

    cout<<"the words is: "<<counter;

}

  

int main()

{

string vv=askchar();

check(vv);

  

return 0;

}