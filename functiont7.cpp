#include<iostream>
using namespace std;
int triangle(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    row=n;
    while(row>=1){
        col=row;
        while(col>0){
            cout<<"*";
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
    return 0;
}
int main(){
    int r,c,ans;
    ans=triangle(r,c);
   // cout<<ans;
    return 0;
}