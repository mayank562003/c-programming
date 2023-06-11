#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string>
using namespace std;
class bank
{
  string name1,name2,name,address,companyname,age2,phone,phone2,email,email2,pasword,dob,bankcode="10",bankaccno,bankuser,housename,areaname,cityname,statename,countryname,choice2,username1,username2,seconduser1,seconduser2,dob2,housename2,areaname2,cityname2,statename2,countryname2;
  int amount_deposit;
  int age,user=1,ask,choice;
  public:
  void new_bank_acc();
  void deposit_money();
  void withdraw_money();
  void balance_enquariy();
  void bank_account_holder();
  void close_bank_account();
  void update_your_bank_account();
  void exit();  
};
void bank::new_bank_acc(){
    system("cls");
    cout<<"which type of account do you want\n";
    cout<<"1)SAVING ACCOUNT\n 2)CURRENT ACCOUNT\n";
    cin>>ask;
    if(ask==1){
        cout<<"THIS IS SAVING ACCOUNT\n";
        cout<<"which type of account do you want\n";
        cout<<"1)single\n 2)joint account\n";
        cin>>choice;
        if(choice==1){
            cout<<"THIS IS SINGLE ACCOUNT\n";
    cout<<"enter your first name\n";
    cin>>name1;
    cout<<"enter your last name\n";
    cin>>name2;
    cout<<"your name is==>"<<name1+" "<<name2<<endl;
    cout<<"enter your DATE OF BIRTH==>";
    cin>>dob;
    cout<<"enter your house number==>";
    cin>>housename;
    cout<<"enter your AREA NAME==>";
    cin>>areaname;
    cout<<"enter your city name==>";
    cin>>cityname;
    cout<<"enter your state name==>";
    cin>>statename;
    cout<<"enter your country name==>";
    cin>>countryname;
    cout<<"your ADDRESS IS==>"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
    cout<<"enter your valid phone no.\n";
    cin>>phone;
    int lengthofphone=phone.length();
    if(lengthofphone==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age;
    cout<<"enter your password\n";
    cin>>pasword;
    bankuser=to_string(user);
    bankaccno=bankcode+dob+bankuser;
    user=user+1;
    cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    cout<<bankaccno;}
    if(choice==2){
        cout<<"THIS IS JOINT ACCOUNT\n";
        cout<<"enter the first name of user one\n";
        cin>>username1;
        cout<<"enter the last name of user one\n";
        cin>>username2;
        cout<<"YOUR NAME IS==>"<<username1+" "<<username2<<endl;
        cout<<"enter your date of birth\n";
        cin>>dob;
        cout<<"enter first user house number==>";
        cin>>housename;
        cout<<"enter first user area name==>";
        cin>>areaname;
        cout<<"enter first user city name==>";
        cin>>cityname;
        cout<<"enter first user state name==>";
        cin>>statename;
        cout<<"enter first user country name==>";
        cin>>countryname;
        cout<<"YOUR ADDRESS IS"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
        cout<<"enter your valid phone number\n";
        cin>>phone;
        int lengthofphone=phone.length();
    if(lengthofphone==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age;
    //cout<<"enter your password\n";
    //cin>>pasword;
   /* bankuser=to_string(user);
    bankaccno=bankcode+dob+bankuser;
    user=user+1;*/
    //cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    //cout<<bankaccno;
    cout<<"enter the first name of user second\n";
        cin>>seconduser1;
        cout<<"enter the last name of user second\n";
        cin>>seconduser2;
        cout<<"YOUR NAME IS==>"<<seconduser1+" "<<seconduser2<<endl;
        cout<<"enter your date of birth\n";
        cin>>dob2;
        cout<<"enter second user house number==>";
        cin>>housename2;
        cout<<"enter second user area name==>";
        cin>>areaname2;
        cout<<"enter second user city name==>";
        cin>>cityname2;
        cout<<"enter second user state name==>";
        cin>>statename2;
        cout<<"enter second user country name==>";
        cin>>countryname2;
        cout<<"YOUR ADDRESS IS"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
        cout<<"enter your valid phone number\n";
        cin>>phone2;
        int lengthofphone2=phone2.length();
    if(lengthofphone2==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone2;
    }
    cout<<"enter your email\n";
    cin>>email2;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age2;
    cout<<"enter your password\n";
    cin>>pasword;
     bankuser=to_string(user);
    bankaccno=bankcode+dob+dob2+bankuser;
    user=user+1;
    cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    cout<<bankaccno;
    }
        }
        if(ask==2){
            cout<<"THIS IS YOUR CURRENT ACCOUNT\n";
            cout<<"which type of account do you want\n";
            cout<<"1)SALARIED ACCOUNT\n 2)BUSINESS ACCOUNT\n";
            cin>>choice;
            if(choice==1){
                cout<<"THIS IS YOUR SALARIED ACCOUNT\n";
                 cout<<"enter your first name\n";
    cin>>name1;
    cout<<"enter your last name\n";
    cin>>name2;
    cout<<"your name is==>"<<name1+" "<<name2<<endl;
    cout<<"enter your DATE OF BIRTH==>";
    cin>>dob;
    cout<<"enter your house number==>";
    cin>>housename;
    cout<<"enter your AREA NAME==>";
    cin>>areaname;
    cout<<"enter your city name==>";
    cin>>cityname;
    cout<<"enter your state name==>";
    cin>>statename;
    cout<<"enter your country name==>";
    cin>>countryname;
    cout<<"your ADDRESS IS==>"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
    cout<<"enter your valid phone no.\n";
    cin>>phone;
    int lengthofphone=phone.length();
    if(lengthofphone==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age;
    cout<<"enter your password\n";
    cin>>pasword;
    bankuser=to_string(user);
    bankaccno=bankcode+dob+bankuser;
    user=user+1;
    cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    cout<<bankaccno<<endl;
    cout<<"ENTER YOUR COMPANY NAME\n";
    cin>>companyname;
            }
            if(choice==2){
                cout<<"THIS IS YOUR BUSINESS ACCOUNT\n";
                cout<<"which type of account do you want\n";
                cout<<"(1)PROPERITERSHIP ACCOUNT\n (2)PARTENERSHIP ACCOUNT\n";
                cin>>choice;
                if(choice==1){
       cout<<"THIS IS YOUR PROPERITERSHIP ACCOUNT\n";
    cout<<"enter your first name\n";
    cin>>name1;
    cout<<"enter your last name\n";
    cin>>name2;
    cout<<"your name is==>"<<name1+" "<<name2<<endl;
    cout<<"enter your DATE OF BIRTH==>";
    cin>>dob;
    cout<<"enter your house number==>";
    cin>>housename;
    cout<<"enter your AREA NAME==>";
    cin>>areaname;
    cout<<"enter your city name==>";
    cin>>cityname;
    cout<<"enter your state name==>";
    cin>>statename;
    cout<<"enter your country name==>";
    cin>>countryname;
    cout<<"your ADDRESS IS==>"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
    cout<<"enter your valid phone no.\n";
    cin>>phone;
    int lengthofphone=phone.length();
    if(lengthofphone==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age;
    cout<<"enter your password\n";
    cin>>pasword;
    bankuser=to_string(user);
    bankaccno=bankcode+dob+bankuser;
    user=user+1;
    cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    cout<<bankaccno<<endl;
    cout<<"ENTER YOUR COMPANY NAME\n";
    cin>>companyname;
    cout<<"\nYOUR GST NUMBER IS 984\n";
                }
                    if(choice==2){
                        cout<<"THIS IS YOUR PARTENERSHIP ACCOUNT\n";
                        cout<<"enter the first name of user one\n";
        cin>>username1;
        cout<<"enter the last name of user one\n";
        cin>>username2;
        cout<<"YOUR NAME IS==>"<<username1+" "<<username2<<endl;
        cout<<"enter your date of birth\n";
        cin>>dob;
        cout<<"enter first user house number==>";
        cin>>housename;
        cout<<"enter first user area name==>";
        cin>>areaname;
        cout<<"enter first user city name==>";
        cin>>cityname;
        cout<<"enter first user state name==>";
        cin>>statename;
        cout<<"enter first user country name==>";
        cin>>countryname;
        cout<<"YOUR ADDRESS IS"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
        cout<<"enter your valid phone number\n";
        cin>>phone;
        int lengthofphone=phone.length();
    if(lengthofphone==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone;
    }
    cout<<"enter your email\n";
    cin>>email;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age;
    //cout<<"enter your password\n";
    //cin>>pasword;
   /* bankuser=to_string(user);
    bankaccno=bankcode+dob+bankuser;
    user=user+1;*/
    //cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    //cout<<bankaccno;
    cout<<"enter the first name of user second\n";
        cin>>seconduser1;
        cout<<"enter the last name of user second\n";
        cin>>seconduser2;
        cout<<"YOUR NAME IS==>"<<seconduser1+" "<<seconduser2<<endl;
        cout<<"enter your date of birth\n";
        cin>>dob2;
        cout<<"enter second user house number==>";
        cin>>housename2;
        cout<<"enter second user area name==>";
        cin>>areaname2;
        cout<<"enter second user city name==>";
        cin>>cityname2;
        cout<<"enter second user state name==>";
        cin>>statename2;
        cout<<"enter second user country name==>";
        cin>>countryname2;
        cout<<"YOUR ADDRESS IS"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
        cout<<"enter your valid phone number\n";
        cin>>phone2;
        int lengthofphone2=phone2.length();
    if(lengthofphone2==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone2;
    }
    cout<<"enter your email\n";
    cin>>email2;
    cout<<"enter how much you deposit money\n";
    cin>>amount_deposit;
    cout<<"enter your age\n";
    cin>>age2;
    cout<<"enter your password\n";
    cin>>pasword;
     bankuser=to_string(user);
    bankaccno=bankcode+dob+dob2+bankuser;
    user=user+1;
    cout<<"YOUR BANK ACCOUNT NUMBER IS==>";
    cout<<bankaccno<<endl;
    cout<<"enter your company name\n";
    cin>>companyname;
    cout<<" SO YOUR GST NUMBER IS 984\n";
                    }
            }
        }
    }
    void bank::deposit_money(){
        string acc_holder;
        int amount,accno;
        cout<<"enter your account number\n";
        cin>>accno;
        cout<<"account holder\n";
        cin>>acc_holder;
        cout<<"How much money you deposit\n";
        cin>>amount;
        amount_deposit=amount_deposit+amount;
        cout<<"your total amount is==>"<<amount_deposit;
    }
    void bank::withdraw_money(){
        int amount;
        string acc_no,acc_holder;
        cout<<"enter your account number\n";
        cin>>acc_no;
        cout<<"enter your name\n";
        cin>>acc_holder;
        cout<<"enter your amount you withdraw\n";
        cin>>amount;
        amount_deposit=amount_deposit-amount;
        cout<<" total amount is==>"<<amount_deposit;
    }
    void bank::update_your_bank_account(){
        int update_choice;
        char x;
        do{
        cout<<"what do you want to change\n";
        cout<<" if you press 1)change email\n 2)change password\n 3)change address\n 4)change phone no.\n";
        cin>>update_choice;
        switch(update_choice){
            case 1:
            cout<<"enter your new email\n";
            cin>>email;
            cout<<"YOUR NEW EMAIL IS==>"<<email<<endl;
            break;
            case 2:
            cout<<"change password\n";
            cin>>pasword;
            cout<<"YOUR NEW PASWORD IS==>"<<pasword<<endl;
            break;
            case 3:
            cout<<"enter your new house number\n";
            cin>>housename;
            cout<<"enter your new area name\n";
            cin>>areaname;
            cout<<"enter your new city name\n";
            cin>>cityname;
            cout<<"enter your state name\n";
            cin>>statename;
            cout<<"enter your new country name\n";
            cin>>countryname;
            cout<<"your new address is==>"<<housename+" "<<areaname+" "<<cityname+" "<<statename+" "<<countryname<<endl;
            break;
            case 4:
            cout<<"enter your new phone number\n";
            cin>>phone;
            int lengthofphone=phone.length();
    if(lengthofphone==10){

    }
    else
    {
        cout<<"invalid phone no must be of length 10";
        cout<<"enter your valid phone no.\n";
        cin>>phone;
        break;
    }}
     cout<<"do you want to perform more y/n\n";
        cout<<"if you want to exit press n\n";
        cin>>x;
        if(x=='n'||x=='N'){
            cout<<"exit";
        }
        }
    while(x=='y'||x=='Y');
        }
int main(){
    int ch;
    char x;
    bank obj;
    system("cls");
    cout<<"                           ## <BANKING MANAGEMENT SYSTEM>\n";
    do{
        cout<<"1)new bank acc\n";
        cout<<"2)deposite money\n";
        cout<<"3)withdraw money\n";
        cout<<"4)account enquiry\n";
        cout<<"5)all bank account holder\n";
        cout<<"6)close bank account\n";
        cout<<"7)update bank account\n";
        cout<<"8)exit\n";
        cout<<"<<select any option from above>>\n";
        cin>>ch;
        switch(ch){
            case 1:"open account";
            obj.new_bank_acc();
            break;
            case 2:"money deposit\n";
            obj.deposit_money();
            break;
            case 3:"withdraw money\n";
            obj.withdraw_money();
            break;
            case 7:"update your bank account\n";
            obj.update_your_bank_account();
            break;
            default:
            cout<<"invalid";
        }
        cout<<"do you want to perform more y/n\n";
        cout<<"if you want to exit press n\n";
        cin>>x;
        if(x=='n'||x=='N'){
            cout<<"exit";
        }
    }
    while(x=='y'||x=='Y');
    return 0;
}