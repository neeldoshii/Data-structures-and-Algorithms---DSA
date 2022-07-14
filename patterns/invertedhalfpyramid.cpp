#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    int num;
    cout<<"Enter the no of rows you want? ";
    cin>>num;
    for (int i = num; i >= 1; i--)
    //rows
    {
        
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}