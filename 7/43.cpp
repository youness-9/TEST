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

  

string lawer(string ask)

{

for(int i=0;i<ask.length();i++)

{

ask[i]=tolower(ask[i]);

}

return ask;

}

string upper(string ask)

{

for(int i=0;i<ask.length();i++)

{

ask[i]=toupper(ask[i]);

}

return ask;

}

  

void Print(vector <string > Addwords,string word1,string word2)

{

  string words;

  vector <string>::iterator iter;

  for(iter=Addwords.begin();iter!=Addwords.end();iter++)

  {

    if(*iter!=word1)

    {

    words+=*iter+" ";

    }

    else

    {

    words+=word2+" ";

    }

  }

  cout<<"repalce with math: "<<words<<endl;

  

}

void PrintdONT(vector <string > Addwords,string word1,string word2)

{

  string words;

  vector <string>::iterator iter;

  for(iter=Addwords.begin();iter!=Addwords.end();iter++)

  {

    if(upper(*iter)!=upper(word1)||lawer(*iter)!=lawer(word1))

    {

    words+=*iter+" ";

    }

    else

    {

      words+=word2+" ";

    }

  }

  cout<<"repalce with dont math: "<<words<<endl;

  

}

  

int main()

{

vector <string > Addwords;

string vv=askchar();

test(vv,Addwords);

Print(Addwords,"xss","sql");

PrintdONT(Addwords,"xss","sql");

return 0;

}