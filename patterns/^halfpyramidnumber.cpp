#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        //rows
        for (int j = 1; j <= 5; j++)
        {
            //columns
            if (j <= 5-i)
            {
                cout<<i;
                /* code */
            }
            else{
                cout<<" ";  
            }
        }
        cout<<endl; 
        
    }
    

    return 0;
}