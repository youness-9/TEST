
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

        ask[0]=toupper(ask[0]);

        if(ask[i]==' ')

        {

            char askl=ask[i+1];

            ask[i+1]=toupper(askl);

        }

    }

                cout<<ask;

  

}

  
  
  

int main()

{

test(ask());

return 0;

}
