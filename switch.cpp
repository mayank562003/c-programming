#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<endl;
    switch(n){
        case 1:
        cout<<"integer 1";
        break;
        case 2:
        cout<<"char 1";
        break;
        default:
        cout<<"both equal";
        break;
    }
    return 0;
}