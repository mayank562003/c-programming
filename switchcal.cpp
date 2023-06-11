#include<iostream>
using namespace std;
int main(){
    int num1,choice,num2,num3,result,ch,ans;
    char ask;
    cout<<"enter first num";
    cin>>num1;
    cout<<"enter the choice 1.+\n 2.-\n 3.*\n 4./\n 5.%\n";
    cin>>choice;
    cout<<"enter second num";
    cin>>num2;
    switch(choice){
     case 1:
       result=num1+num2;
       cout<<result;
       break;
     case 2:
       result=num1-num2;
       cout<<result;
       break;
     case 3:
       result=num1*num2;
       cout<<result;
       break;
     case 4:
       result=num1/num2;
       cout<<result;
       break;
     case 5:
       result=num1%num2;
       cout<<result;       
       break;
       default :
       cout<<"wrong no.";
       break;  
    }
   // cout<<"the result is"<<result<<endl;
    cout<<"do you want to perform more operation y:yes\n n:no\n";
    cin>>ask;
    if(ask=='y'){
        while(true){
            cout<<"enter the choice 1.+\n 2.-\n 3.*\n 4./\n 5.%\n";
            cin>>choice;
            cout<<"enter your variable";
            cin>>num3;
           switch(choice){
     case 1:
     ans=result+num3;
       cout<<ans;
       break;
     case 2:
     ans=result-num3;
       cout<<ans;
       break;
     case 3:
     ans=result*num3;
       cout<<ans;
       break;
     case 4:
     ans=result/num3;
       cout<<ans;
       break;
     case 5:
     ans=result%num3;
       cout<<ans;      
       break;
       default :
       cout<<"wrong no.";
       break;  
    } 
   // cout<<"the result is"<<result<<endl;
    cout<<"do you want to perform more y:yes n:no"<<endl;
    cin>>ask;
    if(ask=='y')continue;
    else break;
    return 0;}}}
