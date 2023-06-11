#include<iostream>
using namespace std;
int swh(int n){
    switch(n){
        case 1:
        cout<<"integer 1\n";
        break;
        case 2:
        cout<<"char 1\n";
        break;
        default :
        cout<<"both equal\n";
        break;
    }
    return 0;
}
int main(){
    int m,ans;
    cout<<"enter the value of m";
    cin>>m;
    ans=swh(m);
    cout<<ans;
    return 0;
}