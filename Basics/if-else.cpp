#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"A is Greater";
    }
    else if (b>a && b>c)
    {
        cout<<"B is Greater";
    }
    
    else if (a==b)
        {
            cout<<"A is equal to B";
        }

    else if (a==c)
        {
            cout<<"A is equal to C";
        }

    else if (c==b)
        {
            cout<<"C is equal to B";
        }

    else if (c==a)
        {
            cout<<"C is equal to A";
        }
    else{
        cout<<"C is greater";
    }

    return 0;
}