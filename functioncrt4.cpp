#include<iostream>
using namespace std;
int crt(char row,char col){
    char n,a;
    cout<<"enter the value of n";
    cin>>n;
    row='A';
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col='A',a=row;
        while(col<=row){
            cout<<a;
            a=a+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
int main(){
    char r,b,c,s,ans;
    ans=crt(r,c);
    cout<<ans;
    return 0;
}