#include<iostream>
using namespace std;
int swh(int a,int b,int n){
    cout<<"enter the value of n";
    cin>>n;
    int c=a+b;
    int d=a-b;
    int e=a*b;
    int f=a%b;
    int g=a/b;
    switch(n){
        case 1:
        cout<<c<<endl;
        break;
        case 2:
        cout<<d<<endl;
        break;
        case 3:
        cout<<e<<endl;
        break;
        case 4:
        cout<<f<<endl;
        break;
        case 5:
        cout<<g<<endl;
        break;
        default :
        cout<<"wrong input\n";
        break;
    }
    return 0;
}
int main(){
    int x,y,z,ans;
    cout<<"enter the value of x";
    cin>>x;
    cout<<"enter the value of y";
    cin>>y;
    ans=swh(x,y,z);
    cout<<ans;
    return 0;
}