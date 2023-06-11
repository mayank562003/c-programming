#include<iostream>
using namespace std;
class abc{
    public:
    void func(int x){
        cout<<"value of x is"<<x<<endl;
    }
    void func(string x,string y){
        string z=x+y;
        cout<<"the string is==>"<<z<<endl;
    }
    void func(int x,int y){
        int z=x+y;
        cout<<"value of sum is==>"<<z<<endl;
    }
};
int main(){
    abc obj;
    obj.func(7);
    obj.func("mayank"," singhal");
    obj.func(8,9);
    return 0;
}