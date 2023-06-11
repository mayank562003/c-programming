#include<iostream>
using namespace std;
int main()
{
    char ask;
    cout<<"enter choice";
    cout<<" a)sum, b)subtract, c)multiply d)divide e)modulus ";
    cin>>ask;
    if(ask=='a'){
        int i,j,sum;
        cout<<"enter the value of i";
        cin>>i;
        cout<<"enter the value of j";
        cin>>j;{
        sum=i+j;
        }
        cout<<sum<<endl;
    }
    if(ask=='b'){
        int k,l,subtract;
        cout<<"enter the value of k";
        cin>>k;
        cout<<"enter the value of l";
        cin>>l;{
        subtract=k-l;
        }
        cout<<subtract<<endl;
    }
    if(ask=='c'){
        int m,n,multiply;
        cout<<"enter the value of m";
        cin>>m;
        cout<<"enter the value of n";
        cin>>n;{
        multiply=m*n;
        }
        cout<<multiply<<endl;
    }
    if(ask=='d'){
        int x,y,divide;
        cout<<"enter the value of x";
        cin>>x;
        cout<<"enter the value of y";
        cin>>y;{
        divide=x/y;
        }
        cout<<divide<<endl;
    }
    if(ask=='e'){
        int g,h,modulus;
        cout<<"enter the value of g";
        cin>>g;
        cout<<"enter the value of h";
        cin>>h;{
        modulus=g%h;
        }
        cout<<modulus<<endl;
    }
    while(true) {
    char choice;    
    cout<<"do you want to perform more"<<endl;
    cin>>choice;
    if(choice=='y'){
     cout<<"enter choice";
    cout<<" a)sum, b)subtract, c)multiply d)divide e)modulus ";
    cin>>ask; if(ask=='a'){
        int i,j,sum;
        cout<<"enter the value of i";
        cin>>i;
        cout<<"enter the value of j";
        cin>>j;{
        sum=i+j;
        }
        cout<<sum<<endl;
    }
    if(ask=='b'){
        int k,l,subtract;
        cout<<"enter the value of k";
        cin>>k;
        cout<<"enter the value of l";
        cin>>l;{
        subtract=k-l;
        }
        cout<<subtract<<endl;
    }
    if(ask=='c'){
        int m,n,multiply;
        cout<<"enter the value of m";
        cin>>m;
        cout<<"enter the value of n";
        cin>>n;{
        multiply=m*n;
        }
        cout<<multiply<<endl;
    }
    if(ask=='d'){
        int x,y,divide;
        cout<<"enter the value of x";
        cin>>x;
        cout<<"enter the value of y";
        cin>>y;{
        divide=x/y;
        }
        cout<<divide<<endl;
    }
    if(ask=='e'){
        int g,h,modulus;
        cout<<"enter the value of g";
        cin>>g;
        cout<<"enter the value of h";
        cin>>h;{
        modulus=g%h;
        }
        cout<<modulus<<endl;
    }
    }
    else if(choice=='n'){
    exit (0);
    }
    }
    return 0;
}