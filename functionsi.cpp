#include<iostream>
using namespace std;
int intrest(int p,int r,int t){
    int si=p*r*t/100;
    return si;
}
int main(){
    int x,y,z,ans;
    cout<<"enter the value of principal value==>";
    cin>>x;
    cout<<"enter the rate==>";
    cin>>y;
    cout<<"enter the time in year==>";
    cin>>z;
    ans=intrest(x,y,z);
    cout<<ans;
    return 0;
}