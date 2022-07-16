#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int ogno = num;
    int reverseno=0; // as we will need for reversing a no * 10
    int lastdigit;
    while (ogno>0)
    {
        lastdigit = ogno%10;
        //for finding lastdigit of the given number and storing it
        ogno = ogno/10;
        //this will remove the last digit of original number
        reverseno = reverseno * 10 + lastdigit;
        // reversing the number
    }
        cout<<"The orignal number is "<<num<<endl;
        cout<<"The reverse number is "<<reverseno;

    
}