#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    int rows, columns;
    cout<<"Enter the no of rows you want?";
    cin>>rows;

    cout<<"Enter the no of Columms you want?";
    cin>>columns;
    
    for (int i = 0; i <= rows; i++)
    {
        for (int j = 0; j <= columns; j++)
        {
        cout<<"*";
        }

        cout<<endl;
        
    }
    
    return 0;
}