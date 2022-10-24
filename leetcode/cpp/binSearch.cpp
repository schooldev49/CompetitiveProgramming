class Solution {
public:
    int search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int begin = 0;
        int mid;
        int max = nums.size() - 1;
        while (begin <= max){
            mid = begin + (max - begin) / 2;
            
            if (nums[mid] == target){
                return mid;
            }
            if (target < nums[mid]){
                max = mid - 1;
            } else {
                begin = mid + 1;
            }
        }
        return -1;
    }
};
