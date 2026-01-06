#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

  
  

char ask()

{

    cout<<"give me the list: ";

    char ask;

    cin>>ask;

    return ask;

}

void test(char ask)

{

    ask=(isupper(ask))? tolower(ask):toupper(ask);

    cout<<ask;

  

}

  
  
  

int main()

{

test(ask());

return 0;

}