#include<iostream>
using namespace std;
add(int a,int b){
    int sum=a+b;
    cout<<sum;
    cout<<endl;
}
int main(){
    int x,y;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter the value of y";
    cin>>y;
    add(x,y);
    int c,d;
    cout<<"enter the value of c";
    cin>>c;
    cout<<"enter the value of d";
    cin>>d;
    add(c,d);
    return 0;
}