#include<iostream>
using namespace std;
int triangle(int row,int col){
    int n,c;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1,c=row;
        while(col<=row){
            cout<<c;
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
int main(){
    int x=1,y,z,ans;
    ans=triangle(x,y);
    cout<<ans;
    return 0;
}