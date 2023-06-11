#include<iostream>
using namespace std;
class person{
    int id;
    string name;
    public:
    void set_p(){
        cout<<"enter id==>";
        cin>>id;
        cout<<"enter the name==>";
        cin>>name;
    }
    void display_p(){
        cout<<"id==>"<<id<<endl<<"name==>"<<name<<endl;
    }
};
class student:public person{
    string course;
    int fee;
    public:
    void set_s(){
        set_p();
        cout<<"enter course==>";
        cin>>course;
        cout<<"enter the fee==>";
        cin>>fee;
    }
    void display_s(){
        display_p();
        cout<<"course name==>"<<course<<endl<<"course fee==>"<<fee<<endl;
    }
};
class professional:public student{
    string company;
    int salary;
    public:
    void set_pr(){
        set_s();
        cout<<"enter company name==>";
        cin>>company;
        cout<<"enter the salary==>";
        cin>>salary;
    }
    void display_pr(){
        display_s();
        cout<<"company name==>"<<company<<endl<<"salary==>"<<salary;
    }
};
int main(){
  //  student s;
    professional p;
   // s.set_s();
  //  s.display_s();
    p.set_pr();
    p.display_pr();
    return 0;
}