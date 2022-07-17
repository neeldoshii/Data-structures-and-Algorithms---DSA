#include <iostream>
using namespace std;

int primeno(int num1, int num2){
    for(int i = num1; i <= num2; i++){
        for(int j = num1; j <= num2; j++){
            if(i%j==0){
                cout<<"The" <<i<<" num is non prime"<<endl;
                break;
            }
            else{
                cout<<"The" <<i<<" num is prime"<<endl;
                break;
            }


    }
    }


}

// Driver Code
int main()
{   
    primeno(2,40);
    return 0;
}