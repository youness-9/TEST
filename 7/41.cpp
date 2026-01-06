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

  
  

void test(string word,vector <string > &Addwords)

{

    while (true)

    {  

        int i=word.find(' ');

        if(i==-1)

         break;

            Addwords.push_back(word.substr(0,i));

            word.erase(0,i+1);

    }

    if(0==0)

    {

        Addwords.push_back(word);

    }

  

}

void Print(vector <string > Addwords)

{

    string words;

    vector <string>::iterator iter=Addwords.end();

    while(iter!=Addwords.begin())

    {

        --iter;

        words+=*iter+" ";

    }

    cout<<words;

}

  
  

int main()

{

vector <string > Addwords;

string vv=askchar();

test(vv,Addwords);

Print(Addwords);

return 0;

}