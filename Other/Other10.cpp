
#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev;
}

int main() {
    int min = 1000;
    int max = 9999;
    
    cout << "Palindromic numbers between " << min << " and " << max << ":" << endl;
    
    for (int i = min; i <= max; i++) {
        int rev = reverseNumber(i);
        if (i == rev) {
            cout << i << endl;
        }
    }
    
    return 0;
}
