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

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i==1 || i == rows || j == 1 || j == columns)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    

    return 0;
}