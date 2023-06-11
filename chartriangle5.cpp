#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter the n";
    cin>>n;
    char r='A';
    while(r<=n){
        int space=n-r;
        while(space){
            cout<<" ";
            space=space-1;
        }
        char c='A';
        while(c<=r){
            cout<<r;
            c=c+1;
        }
        cout<<endl;
        r=r+1;
    }
    return 0;
}