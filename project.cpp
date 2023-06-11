#include<iostream>
using namespace std;
class sqaure {
    public:
    void pattern(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=n){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
  // return 0;
}
     void pattern1(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=n){
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
  // return 0;
}
    void pattern2(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=n){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
    void pattern3(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=n;
        while(col>=1){
            cout<<col;
            col=col-1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
    void pattern4(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int a=1;
    while(row<=n){
        col=1;
        while(col<=n){
            cout<<a;
            a=a+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
  //  return 0;
}
};
class trikon{
    public:
    void triangle(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
         col=1;
        while(col<=row){
            cout<<" *";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
    void triangle1(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int count=1;
    while(row<=n){
        col=1;
        while(col<=row){
            cout<<count;
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
    void triangle2(int row,int col){
    int n,c;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1,c=row;
        while(col<=row){
            cout<<c;
            c=c+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    //return 0;
}
    void triangle3(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    //return 0;
}
    void triangle4(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
    void triangle5(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        col=1;
        while(col<=row){
            cout<<row-col+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
};
class r_trikon{
    public:
    void rhs(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
    void rhs1(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col=1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
  void rhs2(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col=1;
        while(col<=row){
            cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
    void rhs3(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    int a=1;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col=1;
        while(col<=row){
            cout<<a;
            a=a+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
    void rhs4(int row,int col){
    int n,a;
    cout<<"enter the value of n";
    cin>>n;
    while(row<=n){
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        col=1,a=row;
        while(col<=row){
            cout<<a;
            a=a+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
   // return 0;
}
};
class ul_trikon{
    public:
    void ult(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    row=n;
    while(row>=1){
        col=row;
        while(col>0){
            cout<<" *";
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
   // return 0;
}
    void ult1(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    row=n;
    while(row>=1){
        col=row;
        while(col>0){
            cout<<col;
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
    //return 0;
}
    void ult2(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    row=n;
    while(row>=1){
        col=row;
        while(col>0){
            cout<<row;
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
   // return 0; 
}
    void ult3(int row,int col){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    row=n;
    int a=1;
    while(row>=1){
        col=row;
        while(col>0){
            cout<<a;
            a=a+1;
            col=col-1;
        }
        cout<<endl;
        row=row-1;
    }
   // return 0;
}
};
int main(){
    trikon t;
    sqaure s;
    r_trikon r;
    ul_trikon u;
    u.ult3(1,1);
   // r.rhs4(1,1);
   // t.triangle5(1,1);
   // s.pattern(1,1);
   // s.pattern3(1,1);
   // s.pattern4(1,1);
    return 0;
}