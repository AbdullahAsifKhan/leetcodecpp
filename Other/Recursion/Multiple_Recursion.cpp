// Multiple Recursion occurs when a function makes more than one recursive call to itself.
#include <iostream>
using namespace std;

void fun(int n)
{
    if(n <= 0)
        return;

    cout << n << " " <<endl;

    fun(n - 1);
    fun(n - 1);
}

int main()
{
    fun(5);
    return 0;
}