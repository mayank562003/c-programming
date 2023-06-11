#include<iostream>
using namespace std;
int odd(int i){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(i<n){
        cout<<i;
        i=i+2;
        cout<<endl;
    }
    return i;
}
int main(){
    int x=1,y;
    y=odd(x);
    cout<<y;
    return 0;
}