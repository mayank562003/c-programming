#include<iostream>
using namespace std;
int natural(int i){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(i<n){
        cout<<i;
        i=i+1;
        cout<<endl;
    }
    return i;
}
int main(){
    int j=1,k;
    k=natural(j);
    cout<<k;
    return 0;
}