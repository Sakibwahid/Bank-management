#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   char month[20];
  cin>>month;
   int year,count=0;
   cin>>year;
   
   cout<<"You entered "<<month<<endl;
   cout<<"Your abbreviation is"; 
   for(int i=0;i<3;i++)
   {
      month[i]=toupper(month[i]);
      
      cout<<(month[i]);
}
cout<<endl;
if(strcmp(month,"January")==0)
    {count=1;}
else if(strcmp(month,"February")==0)
   {count=2;}
if((year%4==0&&year%100!=0) || year%400==0)
cout<<"This is month number "<<count<<" of the year "<<year<<" which is a leap year";
else cout<<"This is month number "<<count<<" of the year "<<year<<" which is not a leap year";
}

