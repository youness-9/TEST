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

    int all=ask.length();

    int up=0;

    int lw=0;

    for(int i=0;i<ask.length();i++)

    {

    if (isupper(ask[i])) up++;

    if (islower(ask[i])) lw++;

    }

        cout<<all<<"  "<<lw<<"   "<<up;

  

}

  
  
  

int main()

{

test(ask());

return 0;

}