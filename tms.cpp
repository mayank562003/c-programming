#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string>
using namespace std;
class tms
{
    string name1,name2,phone,email,areaname,vehacileno,cityname,statename,workplace,rtocode="21005",licenceno,vechileuser;
    int ask,age,user=1,renewno=5,dob,houseno;
   public:
   void registration();
   void traffic_lights();
   void licence_making();
   void traffic_rules();
   void chalan_details();
   void licence_renew();
   void speed_limit();
   void exit(); 
};
void tms::registration(){
    system("cls");
    cout<<"<<THIS IS REGISTRATION DEPARTMENET>>\n";
    cout<<"HERE IS TWO TYPES OF REGISTRATION\n";
    cout<<"1)OFFICERS\n 2)COMMON PEOPLES\n";
    cout<<"CHOOSE ONE OPTION FROM ABOVE BUT CHOOSE IN INTEGER TYPE\n";
    cin>>ask;
    if(ask==1){
        cout<<"THIS REGISTRATION IS ONLY FOR OFFICERS\n";
        cout<<"Enter Your First Name-->";
        cin>>name1;
        cout<<"Enter Your Last Name-->";
        cin>>name2;
        cout<<"YOUR FULL NAME IS==>"<<name1+" "<<name2<<endl;
        cout<<"Enter Your [DOB]\n";
        cin>>dob;
        cout<<"ENTER YOUR PHONE NUMBER\n";
        cin>>phone;
        int lengthofphone=phone.length();
        if(lengthofphone==10){

        }
        else
        {
            cout<<"Invalid phone number must be of length 10\n ";
            cout<<"Enter you valid phone number\n";
            cin>>phone;
        }
        cout<<"Enter your email\n";
        cin>>email;
        cout<<"Enter your house number\n";
        cin>>houseno;
        cout<<"Enter your area name\n";
        cin>>areaname;
        cout<<"Enter your city name\n";
        cin>>cityname;
        cout<<"Enter your state name\n";
        cin>>statename;
        cout<<"ALSO MENTION YOUR RED LIGHT AREA WHERE YOU GIVE YOUR DUITY\n";
        cin>>workplace;
        cout<<"YOUR FULL ADDRESS IS ==>"<<houseno+" "<<areaname+" "<<cityname+" "<<statename<<endl;
        cout<<"AND YOUR WORKING AREA IS==>"<<workplace<<endl;
    }
    if(ask==2){
        cout<<"THIS REGISTRATION IS FOR COMMON PEPOPLES\n"<<endl;
        cout<<"Enter Your First Name-->";
        cin>>name1;
        cout<<"Enter Your Last Name-->";
        cin>>name2;
        cout<<"YOUR FULL NAME IS==>"<<name1+" "<<name2<<endl;
        cout<<"ENETR YOUR dob\n";
        cin>>dob;
        cout<<"ENTER YOUR PHONE NUMBER\n";
        cin>>phone;
        int lengthofphone=phone.length();
        if(lengthofphone==10){

        }
        else
        {
            cout<<"Invalid phone number must be of length 10\n ";
            cout<<"Enter you valid phone number\n";
            cin>>phone;
        }
        cout<<"Enter your email\n";
        cin>>email;
        cout<<"Enter yor house number\n";
        cin>>houseno;
        cout<<"Enter your area name\n";
        cin>>areaname;
        cout<<"Enter your city name\n";
        cin>>cityname;
        cout<<"Enter your state name\n";
        cin>>statename;
        cout<<"YOUR ADDRESS IS==>"<<houseno+" "<<areaname+" "<<cityname+" "<<statename<<endl;
        cout<<"ENTER YOUR AGE\n";
        cin>>age;
        if(age<18){
            cout<<"you are not allow to drive a vechile\n";

        }
        if(age>18){
            cout<<"you are allow to drive a vehicle\n";
            cout<<"but you must have a driving licence\n";
            cout<<"if you don't have a licence so you will apply for it\n";
            cout<<"if you are catch by traffic police without licence so you will be fined\n";
        }
    }
}
void tms::traffic_lights(){
    int choic;
    cout<<"THERE ARE THREE TYPES OF TRAFFIC LIGHTS\n";
    cout<<"[1] RED\n";
    cout<<"[2] YELLOW\n";
    cout<<"[3] GREEN\n"<<endl;
    cout<<"To know more about traffic lights\n";
    cout<<"choose option from above but in integer type\n";
    cin>>choic;
    if(choic==1){
        cout<<"RED LIGHT - it means you stop your vechiles before zebra crossing\n";
        cout<<" you can stop only when there is red light timing\n";
    }
    if(choic==2){
        cout<<"YELLOW LIGHT - it means you are ready to go\n";
        cout<<"in YELLOW LIGHT you start your vechile\n";
    }
    if(choic==3){
        cout<<"GREEN LIGHT - it mean you go\n";
        cout<<"in GREEN LIGHT you enjoy your ride no one will stops you\n";
    }
}
void tms::licence_making(){
    cout<<"APPLY FOR LICENCE HERE\n";
    cout<<"AT FIRST WE CHECK YOUR AGE\n";
    cout<<"ENTER YOUR AGE IN INTEGER\n";
    cin>>age;
    if(age>18){
        cout<<"YOU ARE EGLIBLE FOR LICENCE\n";
        cout<<"FILL YOUR DETAILS CORRECTLY AS PER REQUIRED\n";
        cout<<"ENTER YOUR FIRST NAME\n";
        cin>>name1;
        cout<<"ENTER YOUR LAST NAME\n";
        cin>>name2;
        cout<<"ENTER YOUR DOB\n";
        cin>>dob;
        cout<<"ENTER YOUR EMAIL\n";
        cin>>email;
        cout<<"ENETR YOUR PHONE NUMBER\n";
        cin>>phone;
        int lengthofphone=phone.length();
        if(lengthofphone==10){

        }
        else
        {
            cout<<"Invalid phone number. Re-Enter your phone number\n";
            cout<<phone;
           // break;
        }
        cout<<"ENTER YOUR HOUSE NUMBER\n";
        cin>>houseno;
        cout<<"ENTER YOUR AREA NAME\n";
        cin>>areaname;
        cout<<"ENTER YOUR CITY NAME\n";
        cin>>cityname;
        cout<<"ENTER YOUR STATE NAME\n";
        cin>>statename;
        cout<<"YOUR ADDRESS IS-->"<<houseno+" "<<areaname+" "<<cityname+" "<<statename<<endl;
        cout<<"ENTER YOUR VECHILE NUMBER\n";
        cin>>vehacileno;
        vechileuser=to_string(user);
        licenceno=rtocode+vehacileno+vechileuser;
        user=user+1;
        cout<<"YOUR LICENCE NUMBER IS-->";
        cout<<licenceno<<endl;
        cout<<"YOUR LICENCE IS READY\n";
        cout<<"YOUR LICENCE EXPIRE LIMIT IS 15 YEARS\n";
        cout<<"AFTER 15 YEARS YOU CAN RENEW YOUR LICENCE\n";
    }
    if(age<18){
        cout<<"YOU ARE NOT EGLIBLE\n";
       // cout<<"exit";
    }
    else
    {
        cout<<"INVALID INPUT\n";
    }
}
void tms::traffic_rules(){
    cout<<"                HERE IS SOME TRAFFIC RULES\n"<<endl;
    cout<<"rule [1] --> you must have a licence while driving a vechile\n";
    cout<<"rule [2] --> while you drive a bike wear helmet if two people travel on bike so both have to wear helmets\n";
    cout<<"rule [3] --> Not more than two people allow on bike\n";
    cout<<"rule [4] --> While you drive a car so you wear seat belt\n";
    cout<<"rule [5] --> while drive a car don't drink and smoke\n";
    cout<<"rule [6] --> while you drive pls drive in which lane you are\n";
    cout<<"rule [7] --> don't park your vechile when there is no parking\n";
    cout<<"rule [8] --> when you drive a car pls take care of NO ENTRY ,don't enter in no entery\n ";
    cout<<"rule [9] --> pls drive according to vechile speed limit\n";
    cout<<"rule [10] --> Blow horn when there is needed\n";
    cout<<"rule [11] --> keep distance from OVER TAKING\n";
}
void tms::chalan_details(){
    cout<<"HERE IS SOME CHALAN AND THEIR AMOUNT\n"<<endl;
    cout<<"CHALAN REASON   "<<"                             PANALTY AMOUNT\n"<<endl;
    cout<<"1>Driving without licence"<<"                      5000/-\n";
    cout<<"2>Driving without helmet"<<"                       1000/-\n";
    cout<<"3>Tripling"<<"                                     1000/-\n";
    cout<<"4>Defective number plate"<<"                       5000/-\n";
    cout<<"5>Misbehave with police"<<"                        2000/-\n";
    cout<<"6>No using seat belt"<<"                           1000/-\n";
    cout<<"7>Smoking in vechiles"<<"                          500/-\n";
    cout<<"8>Improper parking"<<"                             500/-\n";
    cout<<"9>Helmet without strap or untied strap"<<"         1000/-\n";
    cout<<"10>Driving without silencer"<<"                    5000/-\n";
    cout<<"11>Trucks carring dust without covering"<<"        20000/-\n";
    cout<<"12>use of colored light on moter vechile"<<"       500/-\n";
}
void tms::licence_renew(){
    cout<<"Do your licence renew HERE\n";
    cout<<"ENTER YOUR FIRST NAME\n";
    cin>>name1;
    cout<<"ENTER YOUR LAST NAME\n";
    cin>>name2;
    cout<<"AGE SHOULD BE GREATER THAN 18\n";
    cin>>age;
    cout<<"ENTER YOUR HOUSE NUMBER\n";
    cin>>houseno;
    cout<<"ENETR YOUR AREA NAME\n";
    cin>>areaname;
    cout<<"ENTER YOUR CITY NAME\n";
    cin>>cityname;
    cout<<"ENETR YOUR STATE NAME\n";
    cin>>statename;
    cout<<"YOUR ADDRESS IS==>"<<houseno+" "<<areaname+" "<<cityname+" "<<statename<<endl;
    cout<<"ENTER YOUR VECHILE NUMBER\n";
    cin>>vehacileno;
    vechileuser=to_string(renewno);
    licenceno=rtocode+vehacileno+vechileuser;
    renewno=renewno+1;
    cout<<"YOUR LICENCE NUMBER IS-->\n";
    cout<<licenceno<<endl;
    cout<<"YOUR LICENCE IS RENEWED\n";
    cout<<"YOU CAN RE-RENEW YOUR LICENCE AFTER 15 YEAR.\n";
}
void tms::speed_limit(){
   cout<<"SPEED LIMIT ARE DIFFERENT IN DIFFERENT HIGHWAYS\n";
   cout<<"AT FIRST TELL ME WHICH VEHICLE YOU HAVE\n";
   cout<<"1) TWO WHEELER\n 2) FOUR WHEELER\n";
   cout<<"3) TO KNOW ABOUT SPEED LIMIT OF VEHICLES\n";
   cout<<"CHOOSE ONE OPTION FROM ABOVE WHICH DO YOU WANT TO SEE BUT CHOOSE IN NUMBERS\n";
   cin>>ask;
   if(ask==1){
    cout<<"two wheeler are not allowed on express way\n";
   } 
   if(ask==2){
    cout<<"FOUR WHEELER ARE ALLOWED AT ANY EXPRESS WAY\n"<<endl;
   }
   if(ask==3){
    cout<<"SPEED LIMIT OF DIFFERENT VEHICLE\n";
    cout<<"SPEED LIMIT OF CAR ON NATIONAL HIGHWAYS IS--> 100 KMPH\n";
    cout<<"SPEED LIMIT OF CAR ON EXPRESS WAY IS--> 120 KMPH\n";
    cout<<"SPEED LIMIT OF BIKE ON NATIONAL HIGHWAYS IS 30-70 KMPH\n";
    cout<<"SPEED LIMIT OF COMMERCIAL VEHICLES LIKE BUS,TRUCK ON NATIONAL HIGHWAYS IS-->80 KMPH\n";
    cout<<"SPEED LIMIT OF COMMERCIAL VEHICLES ON EXPRESS WAY IS--> 90 KMPH\n";
    }
}
void tms::exit(){
    cout<<"exit";
}
int main(){
    int ch;
    char x;
    tms obj;
    system("cls");
    cout<<"                        ### TRAFFIC MANAGEMENT SYSTEM ###\n";
    do{
    cout<<"(1) registration\n";
    cout<<"(2) traffic lights\n";
    cout<<"(3) licence making\n";
    cout<<"(4) traffic rules\n";
    cout<<"(5) chalan details\n";
    cout<<"(6) licence renew\n";
    cout<<"(7) speed limit\n";
    cout<<"(8) exit\n";
    cout<<"choose one option from above\n";
    cin>>ch;
    switch(ch){
        case 1:"registration\n";
        obj.registration();
        break;
        case 2:"traffic lights\n";
        obj.traffic_lights();
        break;
        case 3:"licence making\n";
        obj.licence_making();
        break;
        case 4:"traffic rules\n";
        obj.traffic_rules();
        break;
        case 5:"chalan details\n";
        obj.chalan_details();
        break;
        case 6:"licence renew\n";
        obj.licence_renew();
        break;
        case 7:"speed limit\n";
        obj.speed_limit();
        break;
        case 8:"For exit\n";
        obj.exit();
        break;
        default:
        cout<<"Invalid input\n";
        break;
    }
    cout<<"Do you want to perform more [YES] OR [NO]\n";
    cout<<"If you want to continue than press y\n";
    cout<<"If you want to exit press n\n";
    cin>>x;
    if(x=='n'||x=='N'){
        cout<<"exit";
    }
    }
    while(x=='y'||x=='Y');
    return 0;
}