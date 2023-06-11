#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size";
    cin>>size;
    int isize=size;
    for(int r=1-isize;r<isize;r++){
        for(int c=1-isize;c<isize;c++){
            cout<<isize-max(abs(r),abs(c));
        }
        cout<<endl;
    }
    return 0;
}