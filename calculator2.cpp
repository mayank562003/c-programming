#include<iostream>
using namespace std;
int main(){
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
    return 0;}}}
