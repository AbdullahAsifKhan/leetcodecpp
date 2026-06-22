// Vectors in C++ - Complete Reference
// Author: AbdullahAsifKhan
// Topic: STL Containers - Vectors

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// Function to print vector elements
void printVector(const vector<int>& vec, const string& label) {
    cout << label << ": ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to print vector using iterator
void printVectorIterator(const vector<int>& vec, const string& label) {
    cout << label << ": ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== VECTOR OPERATIONS IN C++ ===" << endl << endl;

    // 1. DECLARATION AND INITIALIZATION
    cout << "1. DECLARATION AND INITIALIZATION" << endl;
    cout << "----------------------------------" << endl;
    
    vector<int> vec1;                    // Empty vector
    vector<int> vec2(5);                 // Vector with 5 elements (all 0)
    vector<int> vec3(5, 10);             // Vector with 5 elements (all 10)
    vector<int> vec4 = {1, 2, 3, 4, 5};   // Initializer list
    vector<int> vec5(vec4);              // Copy constructor
    vector<int> vec6(vec4.begin(), vec4.end()); // Iterator range

    cout << "vec3 (5 elements of 10): ";
    printVector(vec3, "");
    cout << "vec4 (initializer list): ";
    printVector(vec4, "");

    // 2. BASIC OPERATIONS
    cout << endl << "2. BASIC OPERATIONS" << endl;
    cout << "-------------------" << endl;
    
    vector<int> vec;
    
    // push_back - Add element at end
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << "After push_back(10, 20, 30): ";
    printVector(vec, "");
    
    // pop_back - Remove last element
    vec.pop_back();
    cout << "After pop_back(): ";
    printVector(vec, "");
    
    // front and back
    cout << "Front element: " << vec.front() << endl;
    cout << "Back element: " << vec.back() << endl;
    
    // at() - Access element at index with bounds checking
    cout << "Element at index 1: " << vec.at(1) << endl;
    
    // operator[] - Access element (no bounds checking)
    cout << "Element at index 0: " << vec[0] << endl;
    
    // size and capacity
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Empty?: " << (vec.empty() ? "Yes" : "No") << endl;

    // 3. MODIFIERS
    cout << endl << "3. MODIFIERS" << endl;
    cout << "------------" << endl;
    
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    
    // assign - Replace contents
    v1.assign(5, 100);  // 5 elements with value 100
    cout << "After assign(5, 100): ";
    printVector(v1, "");
    
    // insert - Insert elements
    vector<int> v3 = {1, 2, 3};
    v3.insert(v3.begin() + 1, 100);  // Insert 100 at index 1
    cout << "After insert at index 1: ";
    printVector(v3, "");
    
    // insert multiple
    v3.insert(v3.begin(), 3, 0);  // Insert 3 zeros at beginning
    cout << "After insert 3 zeros at beginning: ";
    printVector(v3, "");
    
    // erase - Remove elements
    v3.erase(v3.begin());  // Remove first element
    cout << "After erase first element: ";
    printVector(v3, "");
    
    // erase range
    vector<int> v4 = {1, 2, 3, 4, 5};
    v4.erase(v4.begin() + 1, v4.begin() + 3);  // Remove elements 1 to 2
    cout << "After erasing range [1,3): ";
    printVector(v4, "");
    
    // swap
    vector<int> a = {1, 2};
    vector<int> b = {3, 4};
    a.swap(b);
    cout << "After swap - a: ";
    printVector(a, "");
    cout << "After swap - b: ";
    printVector(b, "");
    
    // clear
    a.clear();
    cout << "After clear, a empty?: " << (a.empty() ? "Yes" : "No") << endl;

    // 4. ITERATORS
    cout << endl << "4. ITERATORS" << endl;
    cout << "------------" << endl;
    
    vector<int> nums = {10, 20, 30, 40, 50};
    
    cout << "Using iterator: ";
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Using reverse iterator: ";
    for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 5. 2D VECTORS
    cout << endl << "5. 2D VECTORS" << endl;
    cout << "------------" << endl;
    
    // 2D vector declaration
    vector<vector<int>> matrix(3, vector<int>(4, 0));  // 3x4 matrix with zeros
    
    // Initialize with values
    int val = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = val++;
        }
    }
    
    // Print 2D vector
    cout << "3x4 Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // 6. ALGORITHMS WITH VECTORS
    cout << endl << "6. ALGORITHMS WITH VECTORS" << endl;
    cout << "--------------------------" << endl;
    
    vector<int> arr = {5, 2, 8, 1, 9, 3};
    printVector(arr, "Original array");
    
    // sort
    sort(arr.begin(), arr.end());
    printVector(arr, "After sort");
    
    // reverse
    reverse(arr.begin(), arr.end());
    printVector(arr, "After reverse");
    
    // find
    auto it = find(arr.begin(), arr.end(), 8);
    if (it != arr.end()) {
        cout << "Found 8 at index: " << (it - arr.begin()) << endl;
    }
    
    // sum
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum of elements: " << sum << endl;
    
    // count
    int cnt = count(arr.begin(), arr.end(), 5);
    cout << "Count of 5: " << cnt << endl;

    // 7. RESERVE AND RESIZE
    cout << endl << "7. RESERVE AND RESIZE" << endl;
    cout << "---------------------" << endl;
    
    vector<int> v;
    cout << "Initial capacity: " << v.capacity() << endl;
    
    v.reserve(100);  // Reserve space for 100 elements
    cout << "After reserve(100): " << v.capacity() << endl;
    
    // Adding elements
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
    }
    cout << "After adding 10 elements - Size: " << v.size() 
         << ", Capacity: " << v.capacity() << endl;
    
    // resize
    v.resize(5);  // Reduce size to 5
    cout << "After resize(5): Size: " << v.size() 
         << ", Capacity: " << v.capacity() << endl;
    
    v.resize(20, 0);  // Increase size to 20, fill with 0
    cout << "After resize(20, 0): Size: " << v.size() 
         << ", Capacity: " << v.capacity() << endl;

    // 8. EMPLACE (More efficient than insert/push_back)
    cout << endl << "8. EMPLACE OPERATIONS" << endl;
    cout << "----------------------" << endl;
    
    vector<pair<int, char>> vp;
    vp.emplace_back(1, 'a');      // Construct in place
    vp.emplace_back(2, 'b');
    vp.emplace(vp.begin(), 0, 'z'); // Emplace at position
    
    cout << "Pairs: ";
    for (auto& p : vp) {
        cout << "(" << p.first << "," << p.second << ") ";
    }
    cout << endl;

    // 9. VECTOR OF STRUCTS
    cout << endl << "9. VECTOR OF STRUCTS" << endl;
    cout << "-------------------" << endl;
    
    struct Student {
        string name;
        int age;
        float gpa;
    };
    
    vector<Student> students = {
        {"Ali", 20, 3.8},
        {"Ahmed", 22, 3.9},
        {"Sara", 21, 3.7}
    };
    
    for (const auto& s : students) {
        cout << s.name << " - Age: " << s.age << ", GPA: " << s.gpa << endl;
    }

    // 10. COMMON LEETCODE PATTERNS
    cout << endl << "10. COMMON LEETCODE PATTERNS" << endl;
    cout << "----------------------------" << endl;
    
    // a) Two Sum pattern
    vector<int> nums2 = {2, 7, 11, 15};
    int target = 9;
    cout << "Two Sum (target=" << target << "): ";
    for (int i = 0; i < nums2.size(); i++) {
        for (int j = i + 1; j < nums2.size(); j++) {
            if (nums2[i] + nums2[j] == target) {
                cout << "[" << i << "," << j << "]" << endl;
            }
        }
    }
    
    // b) Prefix sum
    vector<int> arr2 = {1, 2, 3, 4, 5};
    vector<int> prefix(arr2.size());
    prefix[0] = arr2[0];
    for (int i = 1; i < arr2.size(); i++) {
        prefix[i] = prefix[i-1] + arr2[i];
    }
    cout << "Prefix sum: ";
    printVector(prefix, "");
    
    // c) Sliding window maximum
    cout << "Note: Sliding window patterns are common in LeetCode medium/hard problems" << endl;

    cout << endl << "=== END OF VECTOR OPERATIONS ===" << endl;
    
    return 0;
}
