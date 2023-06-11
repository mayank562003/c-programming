#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int row=n;
    int a=1;
    while(row>=1){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=row;
        while(col>0){
            cout<<a;
            col=col-1;
        }
        cout<<endl;
        a=a+1;
        row=row-1;
    }
    return 0;
}