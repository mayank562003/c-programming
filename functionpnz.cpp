#include<iostream>
using namespace std;
int pnz(int a){
    if(a>0)
        cout<<"positive no\n";
else if(a<0)
        cout<<"negative no\n";
    else
    cout<<"zero\n";
    return 0;
}
int main(){
    int n,ans;
    cout<<"enter the value of n";
    cin>>n;
    ans=pnz(n);
    cout<<ans;
    return 0;

}