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

int ask()

{

  cout << "give me the num: ";

  int ask;

  cin >> ask;

  return ask;

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

bool CheckTheNumber(int arry[3][3], int ask)

{

  for (int i = 0; i < 3; i++)

  {

    for (int z = 0; z < 3; z++)

    {

      if (arry[i][z] == ask)

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

int main()

{

  srand((unsigned)time(NULL));

  int arry[3][3];

  matrix(arry);

  PrintArry(arry);

  int askk = ask();

    if(CheckTheNumber(arry,askk))

    {

        cout<<"yes is thiear";

    }

    else{cout<<"is not";}

  return 0;

}