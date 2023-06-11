#include<iostream>
using namespace std;
int prm(int n,int j,int i){
    while(j<=n){
        i=2;
        while(i<j){
            switch(j%i==0){
                case 1:
                cout<<j<<"not prime\n";
                goto exit_loop;
            }
            i=i+1;
        }
        exit_loop:;
        switch(i==j){
            case 1:
            cout<<j<<"prime\n";
            break;
        }
        j=j+1;
    }
    return 0;
}
int main(){
    int m,x=2,y,ans;
    cout<<"enter the value of m";
    cin>>m;
    ans=prm(m,x,y);
    cout<<ans;
    return 0;
}