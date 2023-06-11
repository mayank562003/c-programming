#include<iostream>
using namespace std;
int pr(int n,int i){
   // cout<<"enter the value of n";
    //cin>>n;
    switch(n%i){
        case 0:
        cout<<"\n even\n";
        break;
        case 1:
        cout<<"\n odd\n";
        break;
        default :
        cout<<"end";
        break;
    }
    return 0;
}
int main(){
    int m,j=2,ans;
    cout<<"enter the value of m";
    cin>>m;
    ans=pr(m,j);
    cout<<ans;
    return 0;
}