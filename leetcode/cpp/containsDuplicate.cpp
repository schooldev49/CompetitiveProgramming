class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> ya;
        for (int i=0; i<nums.size(); i++){
            if (ya.find(nums[i]) != ya.end()) {
                return true;
            }
            ya.insert(nums[i]);
        }
        return false;
    }
};
