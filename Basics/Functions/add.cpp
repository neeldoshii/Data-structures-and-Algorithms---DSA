#include <iostream>
using namespace std;

int add (int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

// Driver Code
int main()
{
    int a,b;
    cout << "Enter the two numbers" << endl;
    cin >> a >> b;
    cout << add(a,b) << endl;
    return 0;
}