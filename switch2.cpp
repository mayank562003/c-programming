#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int a,b;
    int c;
    cout<<endl;
    switch(n){
        case 1:
        cin>>a>>b;
        c=a+b;
        cout<<c;
        break;
        case 2:
        cin>>a>>b;
        c=a-b;
        cout<<c;
        break;
        case 3:
        cin>>a>>b;
        c=a*b;
        cout<<c;
        break;
        case 4:
        cin>>a>>b;
        c=a%b;
        cout<<c;
        break;
        case 5:
        cin>>a>>b;
        c=a/b;
        cout<<c;
        break;
        default:
        cout<<"your input is wrong,pls give right input";
        break;
    }
    return 0;
}