#include <iostream>
#include<string.h>
using namespace std;
/// @brief 
/// @return 
int main()
{
 char a[210];
 int y=0,i,s=0,t[100];
 cin>>a;
 int l=strlen(a);
 for(i=0;i<l;i++)
 {
    if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u')
     {t[y]=i;
     y++;}
    
 }
 for(int j=0;j<y;j++)
 {
    if((t[j]+1)==t[j+1]){
        s++;
        if(s==2)
        break;
    }
   
    else 
    {s=0;
   }
    
 }
 if(s==2)
 
 cout<<"YES";
 else
cout<<"NO";
 //
}


