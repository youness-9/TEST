#include <iostream>
  
using namespace std;
  
#include <bits/stdc++.h>
  
#include "Header Files/Mylib.h"
  
#include <iomanip>
  
#include <iostream>
  
#include <vector>
  
#include <string>
  
#include <cctype>
  
int random(int from, int to)
  
{
  
  return rand() % (to - from + 1) + from;
}
  

void matrix(int arry[3][3])
  
{
  
  for (int i = 0; i < 3; i++)
  
  {
  
    for (int z = 0; z < 3; z++)
  
    {
  
      arry[i][z] = random(1, 10);
    }
  }
}
  
int CheckTheNumber(int arry[3][3])
{
    int maxmum=0;
    
  for (int i = 0; i < 3; i++)
  
  {
  
    for (int z = 0; z < 3; z++)
  
    {
  
      if (arry[i][z] > maxmum)
      {
        maxmum=arry[i][z];
      }
    }
  
  }
  return maxmum;
}

int CheckTheminimum(int arry[3][3])
{
    int minimum=arry[0][0];
    
  for (int i = 0; i < 3; i++)
  
  {
  
    for (int z = 0; z < 3; z++)
  
    {
  
      if (arry[i][z] < minimum)
      {
        minimum=arry[i][z];
      }
    }
  
  }
  return minimum;
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
  
  int arry1[3][3];
  matrix(arry1);

  PrintArry(arry1);
    cout<<endl;

cout<<"max is:"<<CheckTheNumber(arry1);
cout<<"min is:"<<CheckTheminimum(arry1);
  return 0;
}
