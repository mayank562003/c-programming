#include<iostream>
using namespace std;
int tri(char row,char col){
    char n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col='A';
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
    char r='A',c,ans;
    ans=tri(r,c);
    cout<<ans;
    return 0;
}