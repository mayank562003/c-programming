#include<iostream>
using namespace std;
int main()
{
    int a=3,b=3;
    int arr[3][3]={{3,5,6},{5,9,7},{6,1,5}};
    for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
    cout<<arr[i][j]<<" \n"[j==b-1];
    cout<<"abc";
    return 0;
};
