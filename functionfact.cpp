#include<iostream>
using namespace std;
int fact(int f,int i){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n){
        f=f*i;
        i=i+1;
    }
   // cout<<f;
     return f;
}
int main(){
    int x=1,y=1,z;
    z=fact(x,y);
    cout<<z;
    return 0;
}