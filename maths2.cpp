#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the value of n";
    cin>>n;
    int x=1;
    while(x<=n){
        int  a=x*x;
        sum=sum+a;
        x=x+1;
    }
    cout<<sum;
    return 0;
}