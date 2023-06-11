#include<iostream>
using namespace std;
int sum(int s,int i){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n){
        s=s+i;
        i=i+1;
    }
    return s-1;
}
int main(){
    int j=1,sm=0,k;
    k=sum(j,sm);
    cout<<k;
    return 0;
}