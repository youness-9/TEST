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

  

char askchar()

{

    cout<<"give me the char: ";

    char ask;

    cin>>ask;

    return ask;

}

  

void test(string ask,char letter)

{

    int counter=0;

    for(int i=0;i<ask.length();i++)

    {

        if(ask[i]==letter) counter++;

    }

    cout<<"\n the number of this char is: "<<counter;

}

  
  
  

int main()

{

string askk=ask();

char vv=askchar();

test(askk,vv);

return 0;

}