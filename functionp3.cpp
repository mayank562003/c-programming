#include<iostream>
using namespace std;
int pattern(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=n){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
int main(){
    int r=1,c=1,ans;
    ans=pattern(r,c);
    cout<<ans;
    return 0;
}