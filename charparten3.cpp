#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter the n";
    cin>>n;
    char row='A';
    char count='A';
    while(row<=n){
        char col='A';
        while(col<=n){
            cout<<count;
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}