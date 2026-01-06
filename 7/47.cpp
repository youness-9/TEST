#include <iostream>

using namespace std;

#include <bits/stdc++.h>

#include "Header Files/Mylib.h"

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

#include <fstream>

bool askloop()

{

    string ask;

    cout<<"do you want add more add Y if yes";

    cin>>ask;

    if(ask=="y"||ask=="Y")

    {

    return true;

    }

    else

    {return false;}

}

  
  

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

  

string Printdata(DataPersons Person1)

{

  

string ask=Person1.AcountNumber+"#//#"+to_string(Person1.Pincode)+"#//#"+Person1.Name+"#//#"+ to_string(Person1.PhoneNumber)+"#//#"+to_string(Person1.Balance);

return ask;

}

  

void files(string data)

{

    fstream file;

    file.open("info.txt",ios::out|ios::app);

  

        if(file.is_open())

        {

            file<<data<<endl;

        }

}

  
  
  
  
  
  

int main()

{

while(askloop())

{

    DataPersons Person1;

    Person1=askchar(Person1);

    files(Printdata(Person1));

}

return 0;

}