#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
        int lastdigit;
        int n = 3034;
        int ogno = n;
        int product = 1;
        int sum = 0;



        
        while(ogno>0){
            lastdigit = ogno % 10;
            ogno = ogno/10;
            product *= lastdigit;
            sum += lastdigit;
        }
       cout<<product<<" "<<sum;
    return 0;
}