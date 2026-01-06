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

  

string check(string ask)

{

    for(int i=0;i<ask.length();i++)

    {

        if(ask[i]!=' ')

        {

            return ask.substr(i,ask.length());

        }

    }

}

  
  

string check2(string ask)

{

    for(int i=ask.length();i>0;i--)

    {

        if(ask[i]!=' ')

        {

            return ask.substr(0,i);;

        }

    }

}

  
  
  
  
  

int main()

{

string vv=askchar();

cout<<check(vv)<<endl;

cout<<check2(vv)<<endl;

  

return 0;

}