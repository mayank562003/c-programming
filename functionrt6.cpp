#include<iostream>
using namespace std;
int mid(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col=1;
        while(col<=row){
            cout<<col;
            col=col+1;
        }
        int star=row-1;
        while(star){
            cout<<star;
            star=star-1;
        } 
        cout<<endl;
        row=row+1;  
    }
    return 0;
}
int main(){
    int r=1,c,s,ans;
    ans=mid(r,c);
    cout<<ans;
    return 0;
}