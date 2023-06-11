#include<iostream>
using namespace std;
int prm(int n,int i){
    while(i<n){
        switch(n%i==0){
            case 1:
            cout<<"not prime\n";
            goto exit_loop;
        }
        i=i+1;
    }
    exit_loop:;
    switch(i==n){
        case 1:
        cout<<"prime\n";
        break;
    }
    return 0;
}
int main(){
    int m,j=2,ans;
    cout<<"enter the value of m";
    cin>>m;
    ans=prm(m,j);
    cout<<ans;
    return 0;
}