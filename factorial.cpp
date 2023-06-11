#include<iostream>
using namespace std;
int main()
{
    int i=1,n,fact=1;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n){
        fact=fact*i;
        i=i+1;
    }
    cout<<fact;
    return 0;
}