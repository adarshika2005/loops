#include<iostream>
using namespace std;
int main(){
    int n=5;
    int a=0;
    int b=1;
    for(int i=1;i<=n;i++){
        int nex=a+b;
        cout<<nex<<" ";
        a=b;
        b=nex;
    }
}