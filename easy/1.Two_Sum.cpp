#include <iostream>
#include <map>
using namespace std;

// Two Sum Solution using Hash Map for O(n) time complexity
class Solution {
public:
    int* twoSum(int nums[], int numsSize, int target, int returnSize[]) {
        map<int, int> hashMap;
        for (int i = 0; i < numsSize; i++) {
            int complement = target - nums[i];
            map<int, int>::iterator it = hashMap.find(complement);
            if (it != hashMap.end()) {
                static int result[2];
                result[0] = it->second;
                result[1] = i;
                returnSize[0] = 2;
                return result;
            }
            hashMap[nums[i]] = i;
        }
        returnSize[0] = 0;
        return NULL;
    }
};

// Test the solution
int main() {
    Solution sol;
    int returnSize[1];
    
    // Test case 1
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int* result1 = sol.twoSum(nums1, 4, target1, returnSize);
    cout << "Test 1: [" << result1[0] << ", " << result1[1] << "]" << endl;
    // Expected: [0, 1] (nums[0] + nums[1] = 2 + 7 = 9)
    
    // Test case 2
    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int* result2 = sol.twoSum(nums2, 3, target2, returnSize);
    cout << "Test 2: [" << result2[0] << ", " << result2[1] << "]" << endl;
    // Expected: [1, 2] (nums[1] + nums[2] = 2 + 4 = 6)
    
    // Test case 3
    int nums3[] = {3, 3};
    int target3 = 6;
    int* result3 = sol.twoSum(nums3, 2, target3, returnSize);
    cout << "Test 3: [" << result3[0] << ", " << result3[1] << "]" << endl;
    // Expected: [0, 1] (nums[0] + nums[1] = 3 + 3 = 6)
    
    return 0;
}
