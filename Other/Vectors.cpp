#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void printVector(const vector<int>& vec) {
    for (int num : vec) cout << num << " ";
    cout << endl;
}

int main() {
    vector<int> vec2(5);
    vector<int> vec3(5, 10);
    vector<int> vec4 = {1, 2, 3, 4, 5};
    vector<int> vec5(vec4);
    vector<int> vec6(vec4.begin(), vec4.end());

    cout << "vec3: "; printVector(vec3);
    cout << "vec4: "; printVector(vec4);

    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << "After push: "; printVector(vec);
    
    vec.pop_back();
    cout << "After pop: "; printVector(vec);
    
    cout << "Front: " << vec.front() << endl;
    cout << "Back: " << vec.back() << endl;
    cout << "at(1): " << vec.at(1) << endl;
    cout << "[0]: " << vec[0] << endl;
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity() << endl;
    cout << "Empty: " << (vec.empty() ? "Yes" : "No") << endl;

    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    
    v1.assign(5, 100);
    cout << "After assign: "; printVector(v1);
    
    vector<int> v3 = {1, 2, 3};
    v3.insert(v3.begin() + 1, 100);
    cout << "After insert: "; printVector(v3);
    
    v3.insert(v3.begin(), 3, 0);
    cout << "After multi-insert: "; printVector(v3);
    
    v3.erase(v3.begin());
    cout << "After erase: "; printVector(v3);
    
    vector<int> v4 = {1, 2, 3, 4, 5};
    v4.erase(v4.begin() + 1, v4.begin() + 3);
    cout << "After range erase: "; printVector(v4);
    
    vector<int> a = {1, 2};
    vector<int> b = {3, 4};
    a.swap(b);
    cout << "After swap - a: "; printVector(a);
    cout << "After swap - b: "; printVector(b);
    
    a.clear();
    cout << "After clear, empty: " << (a.empty() ? "Yes" : "No") << endl;

    vector<int> nums = {10, 20, 30, 40, 50};
    cout << "Forward: ";
    for (auto it = nums.begin(); it != nums.end(); ++it) cout << *it << " ";
    cout << endl;
    
    cout << "Reverse: ";
    for (auto it = nums.rbegin(); it != nums.rend(); ++it) cout << *it << " ";
    cout << endl;

    vector<vector<int>> matrix(3, vector<int>(4, 0));
    int val = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            matrix[i][j] = val++;
    
    cout << "3x4 Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) cout << matrix[i][j] << "\t";
        cout << endl;
    }

    vector<int> arr = {5, 2, 8, 1, 9, 3};
    cout << "Original: "; printVector(arr);
    
    sort(arr.begin(), arr.end());
    cout << "Sorted: "; printVector(arr);
    
    reverse(arr.begin(), arr.end());
    cout << "Reversed: "; printVector(arr);
    
    auto it = find(arr.begin(), arr.end(), 8);
    if (it != arr.end()) cout << "Found 8 at: " << (it - arr.begin()) << endl;
    
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum: " << sum << endl;
    
    int cnt = count(arr.begin(), arr.end(), 5);
    cout << "Count of 5: " << cnt << endl;

    vector<int> v;
    cout << "Initial capacity: " << v.capacity() << endl;
    v.reserve(100);
    cout << "After reserve(100): " << v.capacity() << endl;
    
    for (int i = 0; i < 10; i++) v.push_back(i);
    cout << "Size: " << v.size() << ", Cap: " << v.capacity() << endl;
    
    v.resize(5);
    cout << "After resize(5): Size: " << v.size() << ", Cap: " << v.capacity() << endl;
    
    v.resize(20, 0);
    cout << "After resize(20,0): Size: " << v.size() << ", Cap: " << v.capacity() << endl;

    vector<pair<int, char>> vp;
    vp.emplace_back(1, 'a');
    vp.emplace_back(2, 'b');
    vp.emplace(vp.begin(), 0, 'z');
    
    cout << "Pairs: ";
    for (auto& p : vp) cout << "(" << p.first << "," << p.second << ") ";
    cout << endl;

    struct Student { string name; int age; float gpa; };
    
    vector<Student> students = {
        {"Ali", 20, 3.8},
        {"Ahmed", 22, 3.9},
        {"Sara", 21, 3.7}
    };
    
    for (auto& s : students) cout << s.name << " - Age: " << s.age << ", GPA: " << s.gpa << endl;

    vector<int> nums2 = {2, 7, 11, 15};
    int target = 9;
    cout << "Two Sum (target=" << target << "): ";
    for (int i = 0; i < nums2.size(); i++)
        for (int j = i + 1; j < nums2.size(); j++)
            if (nums2[i] + nums2[j] == target) cout << "[" << i << "," << j << "] ";
    cout << endl;
    
    vector<int> arr2 = {1, 2, 3, 4, 5};
    vector<int> prefix(arr2.size());
    prefix[0] = arr2[0];
    for (int i = 1; i < arr2.size(); i++) prefix[i] = prefix[i-1] + arr2[i];
    cout << "Prefix sum: "; printVector(prefix);
    
    return 0;
}
