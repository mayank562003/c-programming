#include<iostream>
using namespace std;
int add(){
    int a,b;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    int sum=a+b;
    return sum;
}
int main(){
    int c;
    c=add();
    cout<<c;
    return 0;
}