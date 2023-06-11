#include<iostream>
using namespace std;
int main()
{
    char n;
    cout<<"enter the n";
    cin>>n;
    char row='A';
    while(row<=n){
        char col='A',c=row;
        while(col<=row){
            cout<<c;
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}