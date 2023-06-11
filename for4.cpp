#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int r=n;r>=1;r--)
    {
        for(int space=n-r;space>0;space--)
        cout<<" ";
        {
            for(int c=r;c>0;c--)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    return 0;
}