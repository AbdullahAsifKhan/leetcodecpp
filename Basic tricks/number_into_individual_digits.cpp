#include <iostream>
using namespace std;

int main(){
int n = 256;

while (n > 0) {
    int digit = n % 10;   
    //reversed = reversed * 10 + digit;         //for reversing the number
    n = n / 10;           
    cout << digit << endl;                                                           
    // cout<< revresed;                          //for reversing the number
}
}


// For String
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string name;
//    cin >> name;   
//
//    for (int i = 0; i < name.length(); i++) {
//        cout << name[i] << endl;
//    }
//}