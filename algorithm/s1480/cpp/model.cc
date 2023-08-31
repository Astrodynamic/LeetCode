class Solution {
public:
    auto runningSum(std::vector<int>& nums) -> std::vector<int> {
        for(decltype(nums.size()) idx = 1; idx < nums.size(); ++idx) {
            nums[idx] += nums[idx - 1];
        }
        return nums;
    }
};