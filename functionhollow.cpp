#include<iostream>
using namespace std;
int hollow(int r,int c){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    //int r=1;
    while(r<=n){
        int c=1;
        while(c<=n){
            if(c==1||r==c||r==n){
            cout<<"*";}
            else{
            cout<<" ";}
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
    return 0;
}
int main(){
    int row=1,col,ans;
    ans=hollow(row,col);
    cout<<ans;
    return ans;
}