
#include <iostream>
using namespace std;
class triple
{
    private :
    float x,y,z;
    public : 
    void getdata()
    {
        cout<<"ENTER THE VALUES OF X Y Z ";
        cin>>x>>y>>z;
    }
    void setdata(float a,float b,float c)
     {
       x=a;
       y=b;
       z=c; 
     }
    triple()
    {
        x=0;
        y=0;
        z=0;
    } 
    triple (int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    } 
    friend void display(triple sakib);
};
void display(triple sakib)
{
    cout<<sakib.x<<sakib.y<<sakib.z;
}

int main()
{
    cout<<"DEFAULT cons";
   triple obj1;
   display(obj1);
   cout<<endl;
   triple obj2(7,8,9);
 
   display(obj2);
   
}
