#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int r=1;
    while(r<=n){
        int c=1;
        while(c<=n){
            if(r==4||c==4)
            cout<<" * ";
            else
            cout<<" ";
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
    return 0;
}