#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

  
  

void test(int arry[100])

{

    int pv1=0;

    int pv2=1;

        arry[0] = 0;

    arry[1] = 1;

    for(int i=2;i<100;i++)

    {

        arry[i]=pv1+pv2;

        cout<<arry[i];

        pv1=pv2;

        pv2=arry[i];

    }

}

void PrintArry(int arry[100])

{

    for(int i = 0; i < 100; i++)

    {

        cout << arry[i];

    }

}

int main()

{

 srand((unsigned)time(NULL));

int arry[100];

test(arry);

PrintArry(arry);

 return 0;

}