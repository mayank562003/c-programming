#include<iostream>
#include<ctime>
using namespace std;
void getseconds(unsigned long *par);
int main(){
    unsigned long sec;
    getseconds(&sec);
    // print the actual value
    cout<<"number of seconds:"<<sec<<endl;
    return 0;
}
void getseconds(unsigned long *par){
    //get the current number of seconds
    *par=time(NULL);
    return ;
}
