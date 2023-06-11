#include<iostream>
using namespace std;
int main()
{
    int i=2,n;
    cout<<"enter the value of n";
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"not prime";
            break;
            }
            i=i+1;
            }
            if(i==n){
                cout<<"prime";
            }
    return 0;
}