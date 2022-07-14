#include<iostream>
using namespace std;

int main(){
    // int num;
    // cin>>num;

    for (int i = 2; i < 50; i++)
    {
        for (int m = 2; m < i; m++)
        {
            if(i %m==0){
                cout<<"Non Prime No"<<i<<endl;
                    break;
            }
            else{
            cout<<"Prime No"<<i<<endl;
            break;

            }

        }
        
    }
    
}