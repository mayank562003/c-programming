#include<iostream>
using namespace std;
int pattern(char row,char col){
    char n;
    cout<<"enter the value of n";
    cin>>n;
    char a='A';
    while(row<=n){
        col='A';
        while(col<=n){
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
    ans=pattern(r,c);
    cout<<ans;
    return 0;
}