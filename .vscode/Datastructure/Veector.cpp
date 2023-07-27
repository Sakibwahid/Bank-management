#include<iostream>
#include<vector>
#include <algorithm>
#include <iterator>
using namespace std;


int main()
{
   
    vector<int> v,a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    a=v;
    for(int i=0;i<(int)a.size();i++)
    cout <<a[i]<<" ";   
    cout<<endl;
    sort(v.begin(),v.end());
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    reverse(a.begin(),a.end());
    if(a==v)
    cout<<"SAME";
    else cout<<"NOT SAME";
}
