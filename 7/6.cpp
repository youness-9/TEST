#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include<string>

#include<cctype>

  

void OneToNine(int arry[3][3])

{

  int counter=1;

  for(int i=0;i<3;i++)

  {

    for(int z=0;z<3;z++)

    {

      arry[i][z]=counter;

      counter++;

    }

  }

}

  

void PrintArry(int arry[3][3])

{

  for(int i=0;i<3;i++)

  {

    for(int z=0;z<3;z++)

    {

      cout<<setw(5)<<arry[i][z];

    }

    cout<<endl;

  }

}

  
  

int main()

{

srand((unsigned)time(NULL));

  int arry[3][3];

  OneToNine(arry);

  PrintArry(arry);

  return 0;

  

}