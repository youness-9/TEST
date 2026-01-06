#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

  
  
  
  

void Result(vector <string> test)

{

string ask="";

  

    for(string &n:test)

       {

        ask=ask+n+" ";

       }

       cout<<ask;

}

  
  
  

int main()

{

vector<string> test={"a","b","c"};

Result(test);

return 0;

}