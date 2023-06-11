#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"enter your choice 1.\n 2.\n 3.\n 4.\n 5.\n";
    cin>>choice;
    if(choice==1){
    int num1,choice,num2,num3,result;
    char ask;
    cout<<"enter first num";
    cin>>num1;
    cout<<"enter the choice 1.+\n 2.-\n 3.*\n 4./\n 5.%\n";
    cin>>choice;
    cout<<"enter second num";
    cin>>num2;
    if(choice==1)
        result=num1+num2;
    if(choice==2)
        result=num1-num2;
    if(choice==3)
        result=num1*num2;
    if(choice==4)
        result=num1/num2;
    if(choice==5)
        result=num1%num2;
    cout<<"the result is"<<result<<endl;
    cout<<"do you want to perform more operation y:yes\n n:no\n";
    cin>>ask;
    if(ask=='y'){
        while(true){
            cout<<"enter the choice 1.+\n 2.-\n 3.*\n 4./\n 5.%\n";
            cin>>choice;
            cout<<"enter your variable";
            cin>>num3;
            if(choice==1)
        result=result+num3;
    if(choice==2)
        result=result-num3;
    if(choice==3)
        result=result*num3;
    if(choice==4)
        result=result/num3;
    if(choice==5)
        result=result%num3;
    cout<<"the result is"<<result<<endl;
    cout<<"do you want to perform more y:yes n:no"<<endl;
    cin>>ask;
    if(ask=='y')continue;
    else break;
        }}}
        if(choice==2){
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
        }
        if(choice==3){
            int n;
    cout<<"enter the value of n";
    cin>>n;
    int row=1;
    while(row<=n){
       int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
        }
        if(choice==4){
            int i=2,n;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n){
        if(n%i==0){
            if(n==i){
                cout<<"prime";
            }
            else{
                cout<<"not prime";
            }
        }
        i=i+1;
    }
        }
        if(choice==5){
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
        }
        return 0;
        }
