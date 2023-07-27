#include <iostream>
#include <cstdlib>
#include <ctime>
#include<cmath>
using namespace std;
void rotate(int matrix[row][column])
{
   for(int i=0;i<row;i++)
  for(int j=0;j<column;j++)
     swap(matrix[i][j],matrix[j][i]);

    for(int i=0;i<row;i++)
    for(int j=0;j<row/2;j++)
     swap(matrix[i][j],matrix[i][row-j-1]);
}

int main() 
{
  int c,r;
  cin>>r>>c;
  int a[r][c];
  for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
     cin>>a[i][j];


    cout<<"DISPLAYING THE MATRIX";

   for(int i=0;i<r;i++)
   {
   for(int j=0;j<c;j++)
     {
        cout<<a[i][j];
     }
     cout<<endl;
    }
    swap(a[r][c]);
     for(int i=0;i<r;i++)
   {
   for(int j=0;j<c;j++)
     {
        cout<<a[i][j];
     }
     cout<<endl;
    }
    

}
