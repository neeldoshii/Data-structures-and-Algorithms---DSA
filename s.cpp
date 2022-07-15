#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    int count = 0;
  for (int i = 1; i < 10; i++)
  {
    if (i%2!=0)
    {
       cout<<"The number is odd "<<i<<endl;
       count = count +1;
       
    }
    cout<<count;
  }
  
    return 0;
}