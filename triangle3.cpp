#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        int col=1,c=row;
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