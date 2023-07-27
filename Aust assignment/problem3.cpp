#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout<<" Enter the number of elements ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];
    }
    int max=0;
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    {
        if(a[j]==a[i])
        count++;
        if(count>max)
        max=count;
    } 
    cout<<"The most occuring element is : ";   
    cout<<a[max];

}