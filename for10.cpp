#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"even number from 1to n"<<endl;
    for(int i=2;i<=n;i=i+2)
    {
        cout<<i<<endl;
    }
    return 0;
}