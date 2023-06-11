#include<iostream>
using namespace std;
int main()
{  
    int j=2,n;
    cout<<"enter the value of n";
    cin>>n;
    while(j<=n){
        int i=2;
    while(i<j){
        if(j%i==0){
            cout<<j<<"not prime \n";
            break;
            }
            i=i+1;
            }
            if(i==j){
                cout<<j<<"prime \n";
            }
            j=j+1;
            }
    return 0;
}