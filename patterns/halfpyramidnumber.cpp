#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    int num;
    cout<<"Enter the no of rows you want? ";
    cin>>num;
    for (int i = 1; i <=  5; i++)
    {
        
        for (int j = 1; j <=i; j++)
        {
            cout<<i<<" ";
        }

        cout<<endl;
        
    }
    
    return 0;
}
