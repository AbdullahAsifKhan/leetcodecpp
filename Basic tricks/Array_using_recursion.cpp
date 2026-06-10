#include <iostream>
using namespace std;

void printArray(int arr[], int n, int i)
{
    if(i == n)
        return;

    cout << arr[i] << " ";
    printArray(arr, n, i+1);
}


void reverseArray(int arr[], int n, int i)
{
    if(i >= n/2)
        return;

    swap(arr[i], arr[n-i-1]);
    reverseArray(arr, n, i+1);
}


int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n, 0);
    printArray(arr, n, 0);
}