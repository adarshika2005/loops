
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    cout<<"the odd number from 1to n"<<endl;
    for(int i=1;i<=n;i=i+2)
    {
        cout<<"the odd num is "<<i<<endl;
    }
    return 0;
}