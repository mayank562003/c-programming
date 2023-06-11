#include<iostream>
using namespace std;
int main()
{
    char ask;
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"enter choice";
    cout<<"'n'natutal no. 'e'even no. 'o'odd no. 's'sum 'f'factorial\n";
    cin>>ask;
    if(ask=='n'){
        int i=1;
        while(i<=n){
            cout<<i;
            i=i+1;
        }
    }
    if(ask=='e'){
        int j=2;
        while(j<=n){
            cout<<j;
            j=j+2;
        }
    }
    if(ask=='o'){
        int k=1;
        while(k<=n){
            cout<<k;
            k=k+2;
        }
    }
    if(ask=='s'){
        int l=1,sum=0;
        while(l<=n){
            sum=sum+l;
            l=l+1;
        }
        cout<<sum;
    }
    if(ask=='f'){
        int m=1,fact=1;
        while(m<=n){
            fact=fact*m;
            m=m+1;
        }
        cout<<fact;
    }
    return 0;
}