#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    int count = 1;
    
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<count<< " ";
            count +=1;
        }
        cout<<endl;
        
    }
    
    return 0;
}