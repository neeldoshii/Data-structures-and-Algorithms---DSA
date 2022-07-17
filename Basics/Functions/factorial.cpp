#include <iostream>
using namespace std;


    void fact(){
    int num;
    cout<<"Enter number" <<endl; 
    cin>>num;
    int factorial =1;


    for (int i=1; i<= num;i++)
    {
        factorial = factorial * i;     
    }
        cout << "Factorial of " <<num <<" is " << factorial <<endl;
    }
  
// Driver Code
int main()
{
    fact();
    return 0;
}