#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"enter the value of c";
    cin>>c;
    if(a+b>c&&a+c>b&&b+c>a){
    cout<<"it's a valid triangle";}
    else
    cout<<"not valid triangle";
    return 0;
}