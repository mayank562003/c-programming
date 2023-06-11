#include<iostream>
using namespace std;
class vechile{
    public :
    vechile(){
        cout<<"this is a vechile\n";
    }
};
class fourwheeler{
    public :
    fourwheeler(){
        cout<<"this is a four wheeler\n";
    }
};
class car:public vechile,public fourwheeler{
    public:
    car(){
        cout<<"looking good\n";
        cout<<"its have comfertable seats\n";
        cout<<"its have best features\n";
    }
};
int main(){
    car c;
  //  c.car();
    return 0;
}