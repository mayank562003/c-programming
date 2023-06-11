#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int a1=0;
    int a2=1;
    cout<<a1<<a2;
    int i=3;
    while(i<=n)
{
    int a3=a1+a2;
    a1=a2;
    a2=a3;
    cout<<a3;
    i=i+1;
}
return 0;
}