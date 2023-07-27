#include<iostream>
using namespace std;
class a
{
    private :
    int f,i;
    public :
    a()
    {
        f=0;
        i=0;

    }
    a(int x,int y)
    {
        f=x;
        i=y;
    }
    a operator =(const a& d)
    {
        f=d.f;
        i=d.i;
    }
    void dsiplay()
    {
        cout<<f<<" "<<i<<endl;
    }

};
int main()
{
    a obj1(2,5),obj2(3,5);
    obj1.dsiplay();
    obj2.dsiplay();
    obj1=obj2;
    obj1.dsiplay();


}