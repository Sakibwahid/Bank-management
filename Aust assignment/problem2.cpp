#include<iostream>
using namespace std;
struct student 
{
    int roll;
    string name;
    double cgpa;
    public :
    void getdata(student x[],int size)
    {
        for(int i=0;i<size;i++)
        {
            cin>>x[i].name;
            cin>>x[i].roll;
            cin>>x[i].cgpa;
        }
        }
    
};
int main()
{
    int number;
    cout<<"HOW MANY STUDENTS?";
    cin>>number;

    student obj1[5];
    obj1.getdata(obj1,5);
    student* obj=new student[number];
    obj->getdata(obj,number);


}    
