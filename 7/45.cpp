#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include "Header Files/Mylib.h"
#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
#include <cctype>


struct DataPersons{
    
    string AcountNumber;
    int Pincode;
    string Name;
    int PhoneNumber;
    int Balance;
};



DataPersons askchar(DataPersons Person1)
{
    cout<<"give me you AcountNumber: ";
    cin>>Person1.AcountNumber;
    
    cout<<"\n give me you Pincode: ";
    cin>>Person1.Pincode;
    
    cout<<"\n give me you Name: ";
    cin>>Person1.Name;
    
    cout<<"\n give me you PhoneNumber: ";
    cin>>Person1.PhoneNumber;
    
    cout<<"\n give me you Balance: ";
    cin>>Person1.Balance;
    return Person1;
}

void Printdata(DataPersons Person1)
{

cout<<Person1.AcountNumber;
cout<<"#//#"<<Person1.Pincode;
cout<<"#//#"<<Person1.Name;
cout<<"#//#"<<Person1.PhoneNumber;
cout<<"#//#"<<Person1.Balance;

}




void Print(string word2)
{

    
}

int main()
{
DataPersons Person1;
Printdata(askchar(Person1));
return 0;
}