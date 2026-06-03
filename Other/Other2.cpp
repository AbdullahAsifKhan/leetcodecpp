//Tribonacci Sequence [1, 1 ,1, 3, 5, 9, 17, 31, ...]
// [0, 0, 1, 1, 2, 4, 7, 13, 24, ...]

#include <iostream>
using namespace std;


int TribonacciSeq(int n1, int n2,int n3){
    int n4;
    for (int i = 0; i < 10; i++)
    {
        cout<< n1<<" ";
        n4 = n1+n2+n3;
        n1 = n2;
        n2 = n3;
        n3 = n4;
    }
    return n4;
    
}

int main(){
    int n1,n2,n3;
    cin>> n1>>n2>>n3;
    cout<< TribonacciSeq(n1,n2,n3);
}
