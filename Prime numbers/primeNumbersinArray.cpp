#include<iostream>
using namespace std;

int main() 
{

    int arr[100], i, j, a, b;

    cout << "Enter size of an array ";
    cin>>a;

    cout << "Enter the elements of the array array ";
    for (i = 0; i < a; i++) 
    {
        cin >> arr[i];
    }

    cout << "All prime numbers in the array are - ";

    for (i = 0; i < a; i++) 
    {
        j = 2;
        b = 1;
        while (j < arr[i]) {
            if (arr[i] % j == 0) 
            {
                b = 0;
                break;
            }
            j++;
        }
        if (b == 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}