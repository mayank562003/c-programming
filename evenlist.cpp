#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=2;
    while(n>=i){
        cout<<i;
        i=i+2;
        cout<<endl;
    }
    return 0;
}