#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include<string>

#include<cctype>

  

int randomNum(int from,int to)

  

{

  

    return rand()%(to-from+1)+from;

  

}

  
  

void FullMatrinxRandom(int arry[3][3])

{

    for(int i=0;i<3;i++)

    {

        for(int z=0;z<3;z++)

        {

            arry[i][z]=randomNum(1,10);

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

  
  
  

bool CheckEqual(int arry[3][3],int arry2[3][3])

{

    for(int i=0;i<3;i++)

    {

        for(int z=0;z<3;z++)

        {

            if(arry[i][z]!=arry2[i][z])

            {

                return false;

            }

        }

    }

    return true;

}

  
  
  

int main()

{

    srand((unsigned)time(NULL));

    int arry[3][3];

    int arry2[3][3];

    FullMatrinxRandom(arry);

    FullMatrinxRandom(arry2);

  

    PrintArry(arry);

    cout<<endl;

    PrintArry(arry2);

  

    if(CheckEqual(arry,arry2))

    {

        cout<<"ARE aqul";

    }

    else

    {

        cout<<"NOT aqul";

    }

    return 0;

  

}