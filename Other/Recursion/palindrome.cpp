//TODO
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <deque>
#include <cmath>
#include <cstring>
#include <numeric>

using namespace std;
void printArray(String arr[], int n, int i)
{
    if(i == n)
        return;

    cout << arr[i] << " ";
    printArray(arr, n, i+1);
}

int main(){
    String n;
    cin >>n;

    printArray(arr,n,0);



}