#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

  
  
  
  

string Result(vector <string> test,string sub)

{

string ask="";

  

    for(string &n:test)

       {

        ask=ask+n+sub;

       }

       return ask;

}

  

string Result(string arry[],int Num,string sub)

{

string ask="";

  

    for(int i=0;i<Num;i++)

    {

        ask=ask+arry[i]+sub;

    }

    return ask;

}

  
  
  
  
  

int main()

{

string sub=" ";

vector <string> test={"a","b","c"};

string arry[]={"a","bbbb","c"};

cout<<Result(test,sub);

cout<<"\n";

cout<<Result(arry,3,sub);

  

return 0;

}