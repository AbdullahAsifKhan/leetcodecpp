
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

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num = num / 10;
    }
    return count;
}

void findPalindromesInRange(int min, int max) {
    int count = 0;
    cout << "Palindromic numbers between " << min << " and " << max << ":" << endl;
    
    for (int i = min; i <= max; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
            count++;
            if (count % 10 == 0) {
                cout << endl;
            }
        }
    }
    cout << endl << "Total palindromic numbers found: " << count << endl;
}

void findPalindromesByDigits(int digits) {
    int min = 1;
    int max = 9;
    
    for (int i = 1; i < digits; i++) {
        min = min * 10;
        max = max * 10 + 9;
    }
    
    cout << "\nFinding " << digits << "-digit palindromes (" << min << " to " << max << "):" << endl;
    findPalindromesInRange(min, max);
}

int main() {
    int choice;
    
    do {
        cout << "\n===== Palindrome Finder =====" << endl;
        cout << "1. Find palindromes in custom range" << endl;
        cout << "2. Find palindromes by number of digits" << endl;
        cout << "3. Show all 4-digit palindromes" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                int min, max;
                cout << "Enter minimum value: ";
                cin >> min;
                cout << "Enter maximum value: ";
                cin >> max;
                findPalindromesInRange(min, max);
                break;
            }
            case 2: {
                int digits;
                cout << "Enter number of digits: ";
                cin >> digits;
                findPalindromesByDigits(digits);
                break;
            }
            case 3:
                findPalindromesInRange(1000, 9999);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
    
    return 0;
}
