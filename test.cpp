#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"enter the choice 1.\n 2.\n";
    cin>>choice;
    if(choice==1)
    {
    int n,sum=0;
    cout<<"enter the value of n";
    cin>>n;
    int i=1;
    while(n>=i){
        cout<<i;
        sum=sum+i;
        i=i+1;
        cout<<endl;
    }
    cout<<sum;
    }
    if(choice==2)
    {
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int r=n;r>=1;r--)
    {
        for(int space=n-r;space>0;space--)
        {
         cout<<" ";}
            for(int c=r;c>0;c--)
            {
             cout<<"*";}
           cout<<endl;
    }
    }
    return 0;
}