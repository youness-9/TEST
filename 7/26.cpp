#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

  
  

string ask()

{

    cout<<"give me the list: ";

    string ask;

    getline(cin,ask);

    return ask;

}

void test(string ask)

{

  

    for(int i=0;i<ask.length();i++)

    {

  

            ask[i]=tolower(ask[i]);

  
  

    }

    cout<<ask<<endl;

        for(int i=0;i<ask.length();i++)

    {

  

            ask[i]=toupper(ask[i]);

  
  

    }

        cout<<ask;

  

}

  
  
  

int main()

{

test(ask());

return 0;

}