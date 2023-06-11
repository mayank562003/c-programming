#include<iostream>
using namespace std;
int main()
{
    int i=2,n;
    cout<<"enter the value of n";
    cin>>n;
        switch(n%i){
            case 0:
            cout<<"\neven";
            break;
            case 1:
            cout<<"\nodd";
            break;
            default :
            cout<<"end";
            break;
        }
        return 0;
}