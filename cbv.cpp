#include<iostream>
using namespace std;
int square1(int n){
    n*=n;
    return n;
}
void square2(int *n){
    *n*=*n;
    cout<<*n;
}
int main(){
    int n1=8,sq1,n2=8;
    sq1=square1(n1);
    cout<<sq1<<endl;
    square2(&n2);
    return 0;
}