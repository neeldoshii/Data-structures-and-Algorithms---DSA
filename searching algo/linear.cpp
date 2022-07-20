#include <iostream>
using namespace std;
  
int linear(int arr[], int size,int key){

    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == key)
        {
            cout<<"The key is "<<i;
        }
        
        
    }
}


// Driver Code
int main()
{
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    int key;
    cout<<endl<<"Enter the elements in an array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }
    
    cout<<endl<<"Which key you want to search in array :";
    cin>>key;
    linear(arr,n,key);



    return 0;
}