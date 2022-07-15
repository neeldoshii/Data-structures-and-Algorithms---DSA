#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    
    int num =6;
    cout <<"Enter a number ";
    cin >> num;
    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j <=num+1-i; j++)
        {

        cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}