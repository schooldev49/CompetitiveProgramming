#define floop(i,a,b) for (int i=a; i<b; i++)

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans (nums.size(), 0);
        ans[0] = nums[0];
        int leastSum = 0;
        floop(i, 1, nums.size()){
            i == 1 ? leastSum += (nums[i]+nums[i-1]) : leastSum += (nums[i]);
            ans[i] = leastSum;
        }
        return ans;
    }
};
