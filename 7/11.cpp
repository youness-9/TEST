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

  

bool checkSum(int sum1,int sum2)

{

    if(sum1==sum2)

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

    int arry2[3][3];

    FullMatrinxRandom(arry);

    FullMatrinxRandom(arry2);

  

    PrintArry(arry);

    cout<<endl;

    PrintArry(arry2);

  

    int sum1=SumArry(arry);

    int sum2=SumArry(arry2);

    if(checkSum(sum1,sum2))

    {

        cout << "SUM1 = " << sum1 << " | SUM2 = " << sum2 << endl;

        cout<<"are aqul";

    }

    return 0;

  

}