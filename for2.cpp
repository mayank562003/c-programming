#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int r=n;r>=1;r--)
    {
        for(int c=r;c>0;c--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int r=2;r<=n;r++){
        for(int c=1;c<=r;c++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}