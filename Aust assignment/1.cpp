#include<iostream>
#include<cmath>
using namespace std;
int fact(int x)
{
    int factorail=1;
    for(int i=1;i<=x;i++)
    {factorail=factorail*i;}
    return factorail;

}
int main()
{
    int x,n;
    float sum=0;
    cin>>x>>n;
    for(int i=1,j=1;i<=n;i+=2,j++)
    {
      if(j%2==0)
       sum+=(-1)*pow(x,i)/fact(i);
       else
         sum+=pow(x,i)/fact(i);
    }
    cout<<sum<<endl<<endl;
    cout<<fact(5);

} 