#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int x=1;
    while(x<=n){
        //cout<<x*x<<endl;
      int  a=x*x;
      cout<<a<<endl;
        x=x+1;
    }
    return 0;
}