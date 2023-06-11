#include<iostream>
using namespace std;
int main()
{
    int p,r,t,si;
    cout<<"enter the principal amount";
    cin>>p;
    cout<<"enter the rate";
    cin>>r;
    cout<<"enter the time in year";
    cin>>t;
    si=p*r*t/100;
    cout<<si;
    return 0;
    
}
