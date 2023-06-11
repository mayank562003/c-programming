#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int row=n;
    while(row>=1){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int col=row;
        while(col>0){
            cout<<row;
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
    return 0;
}