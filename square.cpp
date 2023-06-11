#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            if(col==1||col==n||row==1||row==n)
            cout<<n;
            else if (col==2||col==n-1||row==2||row==n-1)
            cout<<n-1;
            else if(col==3||col==n-2||row==3||row==n-2)
            cout<<n-2;
            else if(col==4||col==n-3||row==4||row==n-3)
            cout<<n-3;
            else
            cout<<n-4;
             col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}