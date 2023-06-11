#include<iostream>
using namespace std;
int urt(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    row=n;
    while(row>=1){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col=row;
        while(col>0){
            cout<<row;
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
    return 0;
}
int main(){
    int r,c,s,ans;
    ans=urt(r,c);
    cout<<ans;
    return 0;
}