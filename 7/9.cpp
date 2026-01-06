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

void OneToNine(int arry[3][3])

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

  

void PrintMIDDEL(int arry[3][3])

{

        cout<<endl;

        for(int z=0;z<3;z++)

        {

            cout<<setw(5)<<arry[1][z];

        }

        cout<<endl;

                for(int z=0;z<3;z++)

        {

            cout<<setw(5)<<arry[z][1];

        }

  

}

  

int main()

{

srand((unsigned)time(NULL));

    int arry[3][3];

    OneToNine(arry);

    PrintArry(arry);

    PrintMIDDEL(arry);

    cout<<endl;

    return 0;

  

}