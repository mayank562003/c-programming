#include<iostream>
using namespace std;
class abc{
    public:
    void func(int x){
        cout<<"value of integer==>"<<x<<endl;
    }
    void func(double x){
        cout<<"value of double==>"<<x<<endl;
    }
    void func(int x,int y){
        cout<<"value of x and y==>"<<x<<","<<y<<endl;
    }
};
int main(){
    abc obj;
    obj.func(7);
    obj.func(67.5);
    obj.func(9,6);
    return 0;
}