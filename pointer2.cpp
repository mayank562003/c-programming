#include<iostream>
using namespace std;
int main(){
    int var;
    int *ptr;
    int **pptr;
    var=3000;
    //take the address of var
    ptr=&var;
    //take the address of ptr using address of operator &
    pptr=&ptr;
    //take the value using pptr
    cout<<"value of var:"<<var<<endl;
    cout<<"value avialable at *ptr :"<<*ptr<<endl;
    cout<<"value avialable at **pptr:"<<**pptr<<endl;
    return 0;
}