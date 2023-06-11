#include<iostream>
using namespace std;
char ult(char row,char col){
    char n;
    cout<<"enter the value of n";
    cin>>n;
    row=n;
    while(row>='A'){
        col=row;
        while(col>='A'){
            cout<<row;
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
    return 0;
}
int main(){
    char r,c,ans;
    ans=ult(r,c);
    cout<<ans;
    return 0;
}