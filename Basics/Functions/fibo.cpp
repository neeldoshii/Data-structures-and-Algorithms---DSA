#include <iostream>
using namespace std;
  
int fibo(){
    int num;
    cout<<"Enter the number till you want to run fibonacci series :";
    cin>>num;
    int a = 0, b = 1, c,temp;
    for (int i = 1; i <= num; i++)
    {
        cout<<a<<endl;
        c = a+b;
        a = b;
        b = c;

    }
    
}

// Driver Code
int main()
{
  fibo();
    return 0;
}