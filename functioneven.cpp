#include<iostream>
using namespace std;
int even(){
    int j=2,n;
    cout<<"enter the value of n:";
    cin>>n;
    while(j<=n){
        cout<<j;
        j=j+2;
    }
   return j;
}
int main(){
    int c;
    c=even();
    cout<<c;
    return 0;
}