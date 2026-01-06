#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include<string>

#include<cctype>

  

int random(int from,int to)

{

    return rand()%(to-from+1)+from;

}

  
  

void matrix(int arry[3][3])

{

    for(int i=0;i<3;i++)

    {

        for(int z=0;z<3;z++)

        {

            arry[i][z]=random(1,100);

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

    matrix(arry);

    PrintArry(arry);

    return 0;

  

}