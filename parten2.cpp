#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}