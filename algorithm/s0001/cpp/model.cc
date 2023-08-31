#include <unordered_map>
 
class Solution {
public:
    auto twoSum(const vector<int>& nums, int target) -> vector<int> {
        std::unordered_map<int, int> mp;
       
        for (int i = 0; i < nums.size(); ++i) {
            const auto& num = nums[i];
            if (mp.find(target - num) == mp.end()) {
                mp[num] = i;
            } else {
                return {mp[target - num], i};
            }
        }
 
        return {-1, -1};
    }
};