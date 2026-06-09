#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
      vector<int> numbers = {10, 20, 30};
    numbers.push_back(40);
    numbers.push_back(50);

      cout << "Vector elements: ";
    for (int num : numbers) {
          cout << num << " ";
    }
      cout << "\nVector size: " << numbers.size() <<   endl;

    return 0;
}

//int main() {
//      map<  string, int> playerScores;
//    playerScores["Alice"] = 95;
//    playerScores["Bob"] = 82;
//    playerScores["Charlie"] = 88;
//
//      cout << "Alice's score: " << playerScores["Alice"] <<   endl;
//
//      string searchKey = "Bob";
//    if (playerScores.find(searchKey) != playerScores.end()) {
//          cout << searchKey << " is in the game!" <<   endl;
//    }
//
//    return 0;
//}
//
//int main() {
//      vector<int> scores = {45, 12, 85, 32, 70};
//      sort(scores.begin(), scores.end());
//
//      cout << "Sorted scores: ";
//    for (int score : scores) {
//          cout << score << " ";
//    }
//    
//    return 0;
//}