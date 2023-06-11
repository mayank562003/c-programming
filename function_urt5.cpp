#include<iostream>
using namespace std;
int urt(int row,int col){
    int n,a;
    cout<<"enter the value of n";
    cin>>n;
    row=n;
    while(row>=1){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col=1,a=row;
        while(col>0){
            cout<<a;
             a=a+1;
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
    return 0;
}
int main(){
    int r,c,b,s,ans;
    ans=urt(r,c);
    cout<<ans;
    return 0;
}