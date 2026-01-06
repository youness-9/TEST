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

getline(cin, ask);

    return ask;

}

void test(string ask)

{

    cout<<ask[0]<<" ";

    for(int i=0;i<ask.length();i++)

    {

        if(ask[i]==' ')

            cout<<ask[i+1]<<" ";

    }

}

  
  
  

int main()

{

test(ask());

return 0;

}