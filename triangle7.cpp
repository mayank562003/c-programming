#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int i=n;
    while(i>=1){
        int j=i;
        while(j>0){
            cout<<"*";
            j=j-1;
        }
        cout<<endl;
        i=i-1;
    }
    return 0;
}