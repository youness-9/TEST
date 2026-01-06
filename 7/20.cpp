#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include "Header Files/Mylib.h"
#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
#include <cctype>

bool CheckTheNumber(int arry[3][3])
{
 for (int i = 0; i < 3; i++)
 {
  for (int z = 0; z < 3/2; z++)
  {
   if (arry[i][z] != arry[i][2-z])
   {
    return false;
   }
  }
 }
 return true;
}

void PrintArry(int arry[3][3])
{
 for (int i = 0; i < 3; i++)
 {
  for (int z = 0; z < 3; z++)
  {
   cout << setw(5) << arry[i][z];
  }
  cout << endl;
 }
}

  
  
  
int main()
{
 srand((unsigned)time(NULL));
 int arry1[3][3]=
    {
    {1,2,1}
    ,{5,5,5}
    ,{7,3,7}
    };
  
 PrintArry(arry1);
  
if(CheckTheNumber(arry1))
{
    cout<<"it vandomble";
}
else
{
    cout<<"is not";
}
;
 return 0;
}