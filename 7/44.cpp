#include <iostream>

using namespace std;

#include <bits/stdc++.h>

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

  
  
  
  
  

void Print(string word2)

{

  for(int i=0;i<word2.length();i++)

  {

    if(ispunct(word2[i]))

    {

    word2.erase(i,i);

    }

  

  }

  cout<<"repalce with math: "<<word2<<endl;

  

}

  

int main()

{

string vv=askchar();

Print(vv);

return 0;

}