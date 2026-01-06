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

    cout<<"give me the char: ";

    string ask;

    getline(cin,ask);

    return ask;

}

  

void check(string ask)

{

    int conter=0;

    for(int i=0;i<ask.length();i++)

    {

        ask[i]=tolower(ask[i]);

        if((ask[i]=='a')||(ask[i]=='e')||(ask[i]=='i')||(ask[i]=='o')||(ask[i]=='i')) conter++;

    }

    cout<<conter;

}

  

int main()

{

string vv=askchar();

cout<<"is vowel number is";

check(vv);

  

return 0;

}