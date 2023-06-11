#include<iostream>
using namespace std;
int binary(int a){
    int b=a++;
    int c=++a;
    cout<<b<<endl<<c<<endl;
    return 0;
}
int main(){
   int x=1,y,z,ans;
    ans=binary(x);
    cout<<ans;
    return 0;
}