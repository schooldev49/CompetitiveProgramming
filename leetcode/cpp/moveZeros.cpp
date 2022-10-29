class Solution {
public:
  
    void moveZeroes(vector<int>& nums) {
        int pt1 = 0;
        int i = 0;
        while (i<nums.size()) {
            if (nums[i] != 0) nums[pt1++]=nums[i];
            i++;
        }
        while (pt1<nums.size()){
            nums[pt1++]=0;
        }
    }
};
