class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for (int i=nums.size() - 3; i>=0; --i){
            // example [2,1,2] -> 1 2 2
            // I starts at 3 - 3 = 0, runs while i>=0; i minus 1 each time (runs once)
            // example [3,2,3,4] -> 2 3 3 4
            // I starts at 4 - 3 = 1, runs while i>=0; i minus 1 each time (runs twice)
            if (nums[i] + nums[i+1] > nums[i+2]){
                // if 1 + 2 > 2 then return 1 + 2 + 2 
                // if 3 + 3 > 4 then return 3 + 3 + 4 
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        return 0;
    }
};
