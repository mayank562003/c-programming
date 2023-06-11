#include<iostream>
using namespace std;
int main(){
    int j=2,n;
    cout<<"enter the value of n";
    cin>>n;
    while(j<=n){
        int i=2;
        while(i<j){
            switch(j%i==0){
                case 1:
                cout<<j<<"not prime";
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