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

bool CheckTheNumber(int arry[3][3], int number)

{

  for (int i = 0; i < 3; i++)

  {

    for (int z = 0; z < 3; z++)

    {

      if (arry[i][z] == number)

      {

        return true;

      }

    }

  }

  return false;

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

void PrintAndcheck(int arry1[3][3],int arry2[3][3])

{

  for (int i = 0; i < 3; i++)

  {

    for (int z = 0; z < 3; z++)

    {

      if (CheckTheNumber(arry1,arry2[i][z]))

      {

        cout<<setw(3)<<arry2[i][z];

      }

    }

  }

}

  
  
  

int main()

{

  srand((unsigned)time(NULL));

  int arry1[3][3];

  int arry2[3][3];

  matrix(arry1);

   matrix(arry2);

  

  PrintArry(arry1);

    cout<<endl;

  PrintArry(arry2);

  

PrintAndcheck(arry1,arry2);

  return 0;

}