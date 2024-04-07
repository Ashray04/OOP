//Write a program of bank class

#include<iostream>
#include<string.h>

using namespace std;

class bank
{
  string bank_name;
  long acc_no;
  string type_of_acc;
  float balance;
  int amount;

  public:
  void getinfo();
  void displayinfo();
  void credit();
  void debit();
};

void bank::getinfo()
{
  cout<<"Enter Bank Name : "<<endl;
  cin>>bank_name;
  cout<<"Enter Account Number : "<<endl;
  cin>>acc_no;
  cout<<"Enter Type Of Account : "<<endl;
  cin>>type_of_acc;
  cout<<"Enter Balance : "<<endl;
  cin>>balance;
  cout<<"Enter Amount : "<<endl;
  cin>>amount;
}

void bank::displayinfo()
{
  cout<<"Bank Name : "<<bank_name<<endl;
  cout<<"Account Number : "<<acc_no<<endl;
  cout<<"Type Of Account : "<<type_of_acc<<endl;
  cout<<"Balance : "<<balance<<endl;
  cout<<"Amount you want to be credited or debited : "<<amount<<endl;
}

void bank::credit()
{
  int credit;
  credit=balance+amount;
  cout<<"Total amount after credited :"<<credit<<endl;
}

void bank::debit()
{
  int debit;
  if((balance>amount)&&(balance>2000))
  {
    cout<<"You can withdraw the amount"<<endl;
    debit=balance-amount;
    cout<<"Total balance after the withdrawl :"<<debit<<endl;
  }  
  else
  {
    cout<<"You have insufficient amount in your account"<<endl;
  }
}
int main()
{
  bank b1;
  b1.getinfo();
  b1.displayinfo();
  b1.credit();
  b1.debit();
  return 0;
}
