#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    char operation;
    cout<<"Enter number one"<<endl;
    cin>>n1;
    cout<<"Enter number two"<<endl;
    cin>>n2;

    cout<<"Which operation you want to perform with two numbers?"<<endl;
    cin>>operation;

    switch (operation)
    {
        case '+':
        cout<<"The addittion of two number is "<<n1+n2<<endl;
        break;

        case '-':
        cout<<"The Subtraction of two number is "<<n1-n2<<endl;
        break;

        case '/':
        cout<<"The Division of two number is "<<n1/n2<<endl;
        break;

        case '*':
        cout<<"The Multiplication of two number is "<<n1*n2<<endl;
        break;

        
    
    default:
    cout<<"I only know this much :D "<<endl;
        break;
    }
    

}