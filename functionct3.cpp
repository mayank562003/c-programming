#include<iostream>
using namespace std;
int tri(char row,char col){
    char n;
    cout<<"enter the value of n";
    cin>>n;
    char a='A';
    while(row<=n){
        col='A';
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
    int r='A',c,b,ans;
    ans=tri(r,c);
    cout<<ans;
    return 0;
}