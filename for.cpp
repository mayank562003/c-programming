#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int r=1;r<=n;r++)
    {
        for(int c=1;c<=r;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}