#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int t,n,solution1,solution2,d=-1;
    cin>>t;
    for(int i=0;i<=t;i++)
    {
        cin>>n;
        for(int x=1;;x++){
        for(int y=1;y<=n;y++)
        {
            if(y*(pow(x,y))+x*(pow(y,x))==n)
            {solution1=x;
            solution2=y;
            cout<<solution1<<" "<<solution2<<endl;
            }
            else
            d=0;
            
        }
        if(d=0){cout<<"-1";
            }}
        

    }
}