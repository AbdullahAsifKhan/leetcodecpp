//Write a function, persistence, that takes in a positive parameter num and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.
//EG: 39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit, there are 3 multiplications)

// TO SOLVE DONT PUSH TO GIT!!!

#include <iostream>
using namespace std;

int persistence(long long int n){
    int Sdigit,Fdigit,final,count=0;
    while (n>9)
    {
        Sdigit = n %10;  
        cout<<"Second digi"<<Sdigit<<endl;      
        n = n/10;
        cout<<"First digi"<<Fdigit<<endl;      
        n = Fdigit * Sdigit;
        cout<<"Mul: "<<Fdigit * Sdigit<<endl;
        count++;
        cout<<"count: "<< count<<endl;
    }    
    return count;
}

int main(){
    long long int n;
    cin>>n;

    cout<<persistence(n);

}