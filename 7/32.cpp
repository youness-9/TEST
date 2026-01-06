#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

  
  
  

char askchar()

{

    cout<<"give me the char: ";

    char ask;

    cin>>ask;

    return ask;

}

  

bool check(char ask)

{

    ask=tolower(ask);

    return ((ask=='a')||(ask=='e')||(ask=='i')||(ask=='o')||(ask=='i'));

}

  

int main()

{

char vv=askchar();

if(check(vv)) cout<<"is vowel";

  

return 0;

}