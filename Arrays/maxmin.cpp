#include <iostream>
using namespace std;
  
// Driver Code
int main()
{
    int n;
    cout<<"Enter the no of elements in array :";
    cin>>n;
    int array[5] = {5,4,3,2,1};
    int temp;

    
    for(int i= 0; i<n; i++){

        for (int j = 0; j <= i; j++)
        {
            if (array[j]>array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }


    cout<<endl<<"Array in ascending order"<<endl;
    // fpr printing the array
    for (int i = 0; i < n; i++)
    {
        cout <<array[i]<<" ";
    }





    return 0;
}