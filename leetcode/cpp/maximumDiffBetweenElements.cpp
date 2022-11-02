class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min = INT_MAX;
        int diff = -1;
        int max = -1;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] < min) min = nums[i];
            diff = nums[i] - min;
            
            if (max < diff) max = diff;
            
        }
        if (max == 0) return -1;
        return max;
    }
};
