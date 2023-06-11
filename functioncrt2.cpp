#include<iostream>
using namespace std;
int crt(char row,char col){
    char n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col='A';
        while(col<=row){
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
int main(){
    char r='A',c,s,ans;
    ans=crt(r,c);
    cout<<ans;
    return 0;
}