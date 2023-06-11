#include<iostream>
using namespace std;
int triangle(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int count=1;
    while(row<=n){
        col=1;
        while(col<=row){
            cout<<count;
            count=count+1;
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