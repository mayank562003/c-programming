#include<iostream>
using namespace std;
int main(){
    int i=2,n;
    cout<<"enter the value of n";
    cin>>n;
    while(i<n){
        switch(n%i==0){
            case 1:
            cout<<"not prime";
            goto exit_loop;
           /* default:
            cout<<"wrong input";
            break;*/
        }
        i=i+1;
    }
    exit_loop: ;
    switch(i==n){
        case 1:
        cout<<"prime";
        break;
    }
    return 0;
}