#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"enter the no. 1.'n'\n 2.'e'\n 3.'o'\n 4.'s'\n 5.'f'\n";
    cin>>no;
    int n,i,j,k,l,sum,m,fact;
    cout<<"enter the value of n";
    cin>>n;
    switch(no){
        case 1:
        i=1;
        while(i<=n){
            cout<<i;
            i=i+1;
        }
        break;
        case 2:
        j=2;
        while(j<=n){
            cout<<j;
            j=j+2;
        }
        break;
        case 3:
        k=1;
        while(k<=n){
            cout<<k;
            k=k+2;
        }
        break;
        case 4:{
         l=1,sum=0;
        while(l<=n){
            sum=sum+l;
            l=l+1;
            }
            cout<<sum;
        }
        break;
        case 5:
        m=1,fact=1;{
        while(m<=n){
            fact=fact*m;
            m=m+1;
        }
            cout<<fact;
        }
        break;
        default:
        cout<<"wrong input";
        break;
    }
    return 0;
}