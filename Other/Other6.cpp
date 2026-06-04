//You are given an array of positive integers. For each number, repeatedly decrease it by 1 until it becomes 0. Every time the number is decreased, print its new value on a separate line.
//For the number 3: 3,2,1,0



#include <iostream>
using namespace std;

int main(){
    int count=0;
    int arr[3] = {2,3,10};
    for (int i = 0; i < 3; i++)
    {
        while (arr[i]!= -1)
        {
            cout<<arr[i];
            arr[i]--;
            cout<<" ";
        }
        cout<<endl;
    }
    
}