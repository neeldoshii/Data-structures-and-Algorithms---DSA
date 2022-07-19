#include <iostream>
using namespace std;
  
int number()
{

    int lastdigit;
    int square;
    int sum = 0;
    int count = 1;
    int n;
    cout<<"Enter a number";
    cin>>n;
        
    while(n>0){
            
        while(n>0){

            lastdigit = n % 10;

            square = lastdigit * lastdigit;
            n = n/10;   
            sum = sum + square;

        }

        cout<<sum<<endl;
        n = sum;
        sum = 0;
            
        count++;

        if(n==1){
            cout<<"It is happy number";              
        }

    
        if(count>10){

            cout<<"ok";
            break;
        }

    }


}



// Driver Code
int main()
{
    number();
    


    return 0;
}


