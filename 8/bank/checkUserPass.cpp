#include <iostream>
#include <iostream>

using namespace std;

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

#include <fstream>


  





enum enNumberTranstactions

{

  Deposit = 1,

  Winthraw = 2,

  TotalBalance = 3,

  MainMenue = 4,

  

};

struct Info

{

  string AccountData;

  string Number;

  string Name;

  string Phone;

  double Balance;

  string SizeOflist;

  int checkifExitt;

};

struct stUserPass
{
  string user;
  string pass;
};

bool CheckIfexit(string Line, string AccountNumber)

{

  string Spliter = "#//#";

  int Pos = Line.find(Spliter);

  string Sword;

  Sword = Line.substr(0, Pos);

  if (Sword == AccountNumber)

  {

    return true;

  }

  else

  {

    return false;

  }

}

  
vector<string> ReadInfoFromFile(string namefile)

{

  vector<string> Lines;

  fstream file;

  file.close();

  file.open(namefile, ios::in);

  if (file.is_open())

  {

    string line;

    while (getline(file, line))

    {

      Lines.push_back(line);

    }

  }

  file.close();

  return Lines;

}

vector<string> VectorSplitString(string Line)

{

  vector<string> Data;

  string Spliter = "#//#";

  int Pos = 0;

  string Sword;

  while ((Pos = Line.find(Spliter)) != std::string::npos)

  {

    Sword = Line.substr(0, Pos);

    if (Sword != "")

    {

      Data.push_back(Sword);

    }

    Line.erase(0, Pos + Spliter.length());

  }

  if (Line != "")

    Data.push_back(Line);

  return Data;

}

  

int CheckUserPass(Info &Data,string filename,string user)

{

  int counter = 0;

  Data.AccountData=user;
  vector <string> lines=ReadInfoFromFile(filename);

  for (string &n :lines)

  {

    bool check = CheckIfexit(n, Data.AccountData);

    if (check)

    {

      counter++;

    }

  }

  return counter;

}

bool FindUserInCoorect(Info &Data,string filename,stUserPass UserPass)

{

  if (CheckUserPass(Data,filename,UserPass.user) == 0 && CheckUserPass(Data,filename,UserPass.user + "#//#"+UserPass.pass) == 0)

  {

    cout << "\n Cleint with " << "[" << Data.AccountData << "]" << " is not exit ";

    return false;

  }

  else

  {

    return true;

  }

}

stUserPass AskInfoLogin()
{
  stUserPass UserPass;
  cout << "-----------------------------------------------";

  cout << "\n Login Screen \n";

  cout << "-----------------------------------------------\n";

  cout<<"\n give me user:";
  cin>>UserPass.user;
  cout<<"\n give me Pass:";
  cin>>UserPass.pass;
  return UserPass;
}



bool Askpassword()
{
  stUserPass UserPass;
  vector <string> Fileusers;
  Fileusers=ReadInfoFromFile("Users.txt");
  Info Data;

  UserPass=AskInfoLogin();
  if(FindUserInCoorect(Data,"Users.txt",UserPass))
  {
        return true;
  }
  else
  {
    return false;
  }

}

int main()

{
    if(Askpassword())
  {
  cout<<"yess";
  }
  return 0;

}