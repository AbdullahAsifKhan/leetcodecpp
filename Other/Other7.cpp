#include <iostream>
using namespace std;

void rightAngledTriangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
             cout << "*";
        }
         cout << '\n';
    }
}

void invertedTriangle(int rows) {
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
             cout << "*";
        }
         cout << '\n';
    }
}

void pyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
             cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
             cout << "*";
        }
         cout << '\n';
    }
}

void invertedPyramid(int rows) {
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
             cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
             cout << "*";
        }
         cout << '\n';
    }
}

void diamond(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
             cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
             cout << "*";
        }
         cout << '\n';
    }
    
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
             cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
             cout << "*";
        }
         cout << '\n';
    }
}

void hollowSquare(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (i == 1 || i == rows || j == 1 || j == rows) {
                 cout << "*";
            } else {
                 cout << " ";
            }
        }
         cout << '\n';
    }
}

void xPattern(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            if (i == j || j == (rows - i + 1)) {
                 cout << "*";
            } else {
                 cout << " ";
            }
        }
         cout << '\n';
    }
}

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "\nRight-Angled Triangle:\n";
    rightAngledTriangle(rows);

    cout << "\nInverted Triangle:\n";
    invertedTriangle(rows);

    cout << "\nPyramid:\n";
    pyramid(rows);
    
    cout << "\nInverted Pyramid:\n";
    invertedPyramid(rows);
    
    cout << "\nDiamond:\n";
    diamond(rows);

    cout << "\nHollow Square:\n";
    hollowSquare(rows);

    cout << "\nX Pattern:\n";
    xPattern(rows);

    return 0;
}