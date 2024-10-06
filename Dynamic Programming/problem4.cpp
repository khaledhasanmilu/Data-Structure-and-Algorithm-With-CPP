#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int rob(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }
    if (nums.size() == 1) {
        return nums[0];
    }
    if (nums.size() == 2) {
        return max(nums[0], nums[1]);
    }
    vector<int> dp(nums.size());
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (size_t i = 2; i < nums.size(); ++i) {
        dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
    }

    return dp.back();
}

int main() {
    vector<int> nums1 = {1, 2, 3, 1};
    vector<int> nums2 = {2, 7, 9, 3, 1};

    cout <<"Output "<< rob(nums1) << endl; 
    cout <<"Output "<< rob(nums2) << endl; 

    return 0;
}
