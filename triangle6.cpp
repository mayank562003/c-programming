#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"enter the value of n";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            x=row-col+1;
            cout<<x;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}