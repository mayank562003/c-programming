#include<iostream>
using namespace std;
int prime(int i){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"not prime";
            break;
            }
            i=i+1;
            }
            if(i==n){
                cout<<"prime";
            }
            cout<<endl;
      return 0;
}
int main(){
    int j=2,k;
    k=prime(j);
    cout<<k;
    return 0;
}