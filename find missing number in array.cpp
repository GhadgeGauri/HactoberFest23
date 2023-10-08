#include <iostream>
#include <vector>
// Ex-  arr={0,2,3,4,6} for n=5 , find the missing number starting from 0 to n in an array .
// answer =1
class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        int expsum = 0;
        for (int i = 0; i < n; i++) {
            expsum += nums[i];
        }
        return sum - expsum;
    }
};

int main() {
    // Example usage
    std::vector<int> nums = {0, 1, 3}; // Missing number is 2
    Solution solution;
    int missing = solution.missingNumber(nums);
    std::cout << "The missing number is: " << missing << std::endl;
    return 0;
}
