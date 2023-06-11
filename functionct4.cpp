#include<iostream>
using namespace std;
int tri(char row,char col){
    char n,a;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
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
    char r='A',c,b,ans;
    ans=tri(r,c);
    cout<<ans;
    return 0;
}