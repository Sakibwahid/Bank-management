#include<iostream>
#include<string.h>
using namespace std;
struct Employee
{
  int number;
  string first_name;
  string last_name;
  double pay_rate;
};
int main()
{
  Employee obj[5];
  for(int i=0;i<5;i++)
  {
    cout<<"ENTER ID NUMBR ";
    cin>>obj[i].number;
    cout<<"ENTER FIRST NAME ";
    cin>>obj[i].first_name;
     cout<<"ENTER last NAME ";
    cin>>obj[i].last_name;
    cout<<"ENTER HOURLY PAY RATE ";
    cin>>obj[i].pay_rate;
    cout<<endl;

  }
  cout<<"1.ID number"<<endl<<"2.Last name"<<endl<<"3.hourly pay"<<endl;
  cout<<"ENTER YOUR CHOICE ";
  int choice;
  cin>>choice;
  Employee search;
         

  switch(choice)
{
  case 1:
         cout<<"ENTER YOUR ID NUMVBER";
         cin>>search.number;
         for(int i=0;i<5;i++)
         {
          if(obj[i].number==search.number)
          {
           cout<<"ID NUMBER : "<<obj[i].number<<endl;
            cout<<"FIRST NAME : "<<obj[i].first_name<<endl;
            cout<<"Last NAME : "obj[i].last_name<<endl;
            cout<<"HOURLY PAY IS : "<<obj[i].pay_rate<<endl;
           
          }
         }
         break;
  case 2 :
  cout<<"ENTER last name ";
         cin>>search.last_name;
         for(int i=0;i<5;i++)
         {
          if(obj[i].last_name==search.last_name)
          {
            cout<<"ID NUMBER : "<<obj[i].number<<endl;
            cout<<"FIRST NAME : "<<obj[i].first_name<<endl;
            cout<<"Last NAME : "obj[i].last_name<<endl;
            cout<<"HOURLY PAY IS : "<<obj[i].pay_rate<<endl;
           
          }
         }
         break;
  case 3 :
  cout<<"ENTER hourly pau rate";
         cin>>search.pay_rate;
         for(int i=0;i<5;i++)
         {
          if(obj[i].pay_rate==search.pay_rate)
          {
            cout<<"ID NUMBER : "<<obj[i].number<<endl;
            cout<<"FIRST NAME : "<<obj[i].first_name<<endl;
            cout<<"Last NAME : "obj[i].last_name<<endl;
            cout<<"HOURLY PAY IS : "<<obj[i].pay_rate<<endl;
           
           
          }
          
         }
         break;  
           
      
}
}
