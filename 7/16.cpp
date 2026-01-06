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

  int counter = 0;

    int number=0;

  for (int i = 0; i < 3; i++)

  {

    for (int z = 0; z < 3; z++)

    {

      if (arry[i][z] == 0)

      {

        counter++;

      }

            else

            {

                number++;

            }

    }

  }

  if(counter>number)

    {

        return true;

  

    }

    else

    {

        return false;

    }

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

  int arry[3][3]={

    {0,1,1}

    ,{8,0,2}

    ,{8,8,3}

};

  

PrintArry(arry);

if(CheckTheNumber(arry))

{

    cout<<"is sprace";

}

else{

    cout<<"is not";

}

  return 0;

}
