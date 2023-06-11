#include<iostream>
using namespace std;
int triangle(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
int main(){
    int r=1,c,ans;
    ans=triangle(r,c);
    cout<<ans;
    return 0;
}