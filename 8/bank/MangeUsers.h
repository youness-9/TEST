#include <iostream>
#include <iostream>

using namespace std;

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

#include <fstream>
#include "Info.h"

void Action1(vector<string> Lines);
vector<string> ReadInfoFromFile(string namefile);
vector<string> VectorSplitString(string Line);
Info ExtractSire(vector<string> Lines);
int checkk(Info &Data,string filename);
int ShowList();
void WaitAndClear();

void UpdateFileForUsers(stUserPass Data)

{

  fstream file;

  file.open("Users.txt", ios::app);

  if (file.is_open())

  {

    file << Data.user << "#//#" << Data.pass << "#//#" << Data.Permsion << endl;

  }

  file.close();

}



stUserPass ExtractSireOfusers(vector<string> Lines)

{

  stUserPass Data;

  Data.SizeOflist = to_string(Lines.size());

  return Data;

}


void ReturnToPageOneForUsers()

{

  cout << "\n \n Press ENTER to Return To First Page";

  WaitAndClear();


  ShowList();

}
Info StringPutInStructForUsers(vector<string> Lines)

{

  stUserPass Data;

  Data.user = Lines[0];

  Data.pass = Lines[1];

  Data.Permsion = Lines[2];

  return Data;

}

  enum enNumbreActionUser

{

  Action11OfUsers = 1,

  Action21OfUsers = 2,

  Action31OfUsers = 3,

  Action41OfUsers = 4,

  Action51OfUsers = 5,

  Action61OfUsers = 6,

  

};
Info AskUSERAndPassword(stUserPass Data)

{

  stUserPass Data;


  cout << "enter the username: ";

  cin >> Data.pass;

  cout << endl

    << "enter the password: ";

  cin >> Data.Permsion;

  cout << endl

    << "the you want give him full permision: ";

  cin >> Data.Permsion;

  return Data;

}

void addNewUser(string action)

{

  cout << "-----------------------------------------------";

  cout << "\n " << action << "\n";

  cout << "-----------------------------------------------\n";

  cout << "enter New user: ";

}

int askAdmin()

{

  cout << "-------------------------------------------------------\n";

  cout << "          Mange users Menue Screen          \n";

  cout << "-------------------------------------------------------\n";

  int num;

  cout << "[1] List Users. " << endl;

  cout << "[2] Add New User. " << endl;

  cout << "[3] Delete User. " << endl;

  cout << "[4] Apdate User. " << endl;

  cout << "[5] Find User. " << endl;

  cout << "[6] Main Munue " << endl;

  cout << "choose what do you want to do [1-7]: ";

  cin >> num;

  return num;

}

void ShowUserstList(stUserPass Data)

{

  cout << "----------------------------------------------------------------------------------------" << endl;

  cout << "|" << setw(15) << "UserName";

  cout << "|" << setw(12) << "Password";

  cout << "|" << setw(20) << "Permision \n";


}
void PrintUsersSpalted(vector<string> Lines)

{

  stUserPass Data;

  for (string n : Lines)

  {

    Data = StringPutInStructForUsers(VectorSplitString(n));

    cout << "|" << setw(15) << Data.user;

    cout << "|" << setw(12) << Data.pass;

    cout << "|" << setw(20) << Data.Permsion;

  }

}
void Action1User(vector<string> Lines)

{

  ShowUserstList(ExtractSireOfusers(Lines));

  PrintUsersSpalted(Lines);

}

void UpdateFileForUser(stUserPass Data)

{

  fstream file;

  file.open("Users.txt", ios::app);

  if (file.is_open())

  {

    file << Data.user << "#//#" << Data.pass << "#//#" << Data.Permsion << endl;

  }

  file.close();

}

Info addNewClientForUsers(string namefile)

{

  stUserPass Data;

    addNewUser("Add News user sceen");

  if (checkk(Data,namefile) != 0)

  {

    do

    {

      cout << "\n Cleint with " << "[" << Data.user << "]" << " is allrady exit enter anther account number: ";

    } while (checkk(Data,namefile) != 0);

  }

  

  return AskUSERAndPassword(Data);

}


void Action2ForUser()

{

  stUserPass Data;

  Data = addNewClientForUsers("Users.txt");

  UpdateFileForUsers(Data);

  string ask;

  cout << "do you want add more cleint[y,Y]: ";

  cin >> ask;

  

  while (ask == "Y" || ask == "y")

  {

    Data = addNewClientForUsers("Users.txt");

    UpdateFileForUsers(Data);

    cout << "do you want add more cleint[y,Y]: ";

    cin >> ask;

  }

}


void askLoop(enNumbreActionUser NumbreAction)

{
  switch (NumbreAction)

  {

  case enNumbreActionUser::Action11OfUsers:

  {

    WaitAndClear();

    Action1User(ReadInfoFromFile("Users.txt"));

    ReturnToPageOneForUsers();

    break;

  }

  case enNumbreActionUser::Action21OfUsers:

  {
    WaitAndClear();
    Action2ForUser();
    ReturnToPageOneForUsers();
    break;

  }

  }

  }

  int ShowList()
  {
    enNumbreActionUser NumbreAction;
    NumbreAction=enNumbreActionUser(askAdmin());
    askLoop(NumbreAction);
    return 0;
  }
  
