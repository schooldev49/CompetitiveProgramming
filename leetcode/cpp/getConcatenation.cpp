class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();

        vector<int> ans ((2 * size), 0);
        for (int i=0; i<size; i++){
            ans[i] = nums[i];
        }
        for (int i=0; i<size; i++){
            ans[i+size] = nums[i];
        }
            
        
        return ans;
    }
};
