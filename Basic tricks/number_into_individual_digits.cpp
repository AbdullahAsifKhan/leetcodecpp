#include <iostream>
using namespace std;

int main(){
int n = 256;

while (n > 0) {
    int digit = n % 10;   
    n = n / 10;           
    cout << digit << endl;
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