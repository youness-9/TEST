#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include<string>

#include<cctype>

  
  
  
  
  
  

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

  
  
  

bool CheckEqual(int arry[3][3])

{

    for(int i=0;i<3;i++)

    {

        for(int z=0;z<3;z++)

        {

            if(i==z&&arry[i][z]!=9)

            {

                return false;

            }

            else if(i!=z&&arry[i][z]!=0)

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

  
  

    int Matrix1[3][3] = {

 {9,0,0}

 ,{0,9,0}

 ,{0,0,9}

  

 };

 PrintArry(Matrix1);

 cout<<endl;

    if(CheckEqual(Matrix1))

    {

        cout<<"ARE identy";

    }

    else

    {

        cout<<"NOT identy";

    }

    return 0;

  

}