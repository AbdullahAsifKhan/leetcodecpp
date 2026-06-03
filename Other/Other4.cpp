//Complete the findNextSquare method that finds the next integral perfect square after the one passed as a parameter. Recall that an integral perfect square is an integer n such that sqrt(n) is also an integer.

//If the argument is itself not a perfect square then return either -1 or an empty value like None or null, depending on your language. You may assume the argument is non-negative.
//
//Examples ( Input --> Output )
//121 --> 144
//625 --> 676
//114 --> -1  #  because 114 is not a perfect square


#include <iostream>
using namespace std;
long int findNextSquare(long int n) {
    
    int i;
    for ( i = 1; i < n; i++)
    {
        if (n==i*i)
        {
            int temp=i+1;
            cout<< temp*temp;
        }
    }
    if (n!=i)
    {
        cout<<-1;
    }

    
    
}

int main(){
    findNextSquare(121);
}