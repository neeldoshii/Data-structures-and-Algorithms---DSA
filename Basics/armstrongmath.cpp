#include <iostream>
#include<math.h>
using namespace std;
  
// Driver Code
int main()
{
    //armstrong no mewna the all single digits cube's sum is equal to the number given

    int num;
    cout<<"Enter a number to check is it armstrong or not :";
    cin>>num;
    int ogno=num;
    int lastdigit;
    int digit;
    int total = 0;

    while (ogno>0)
    {
        lastdigit = ogno % 10;
        lastdigit = pow(lastdigit,3);
        total+= lastdigit;
        ogno = ogno/10;
    }
    // cout<<total<<" "<<num;
    if (total == num)
    {
        cout<<"The number is armstrong number"<<endl;
    }else{
        cout<<"The number is not armstrong number"<<endl;
    }
    
    

    return 0;
}