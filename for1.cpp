#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"sum of all num"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
}