#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter num"<<endl;
    cin>>n;
    for(int i=10;i>=1;i=i-1)
    {
        cout<<n<<"x"<<i<<"="<<(n*i)<<endl;
    }
    return 0;
}