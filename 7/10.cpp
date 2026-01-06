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

  
  

int SumArry(int arry[3][3])

{

    int counter=0;

    for(int i=0;i<3;i++)

    {

        for(int z=0;z<3;z++)

        {

            counter=counter+arry[i][z];

        }

    }

    return counter;

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

    FullMatrinxRandom(arry);

    PrintArry(arry);

    cout<<endl<<"the sum of all number is : "<<SumArry(arry);

    return 0;

  

}