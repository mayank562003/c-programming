#include<iostream>
using namespace std;
int avg(int a,int b,int c){
    int avg=a+b+c/3;
    return avg;
}
int main(){
    int x,y,z,ans;
    cout<<"enter the value of x:";
    cin>>x;
    cout<<"enter the value of y:";
    cin>>y;
    cout<<"enter the value of z:";
    cin>>z;
    ans=avg(x,y,z);
    cout<<ans;
    return 0;
}