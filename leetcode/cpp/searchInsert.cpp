class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int begin = 0;
        int mid;
        int end = nums.size() - 1;
        while (begin <= end){
            mid = begin + (end - begin) / 2;
            if (nums[mid] == target){
                return mid;
            }
            if (target < nums[mid]){
                end = mid - 1;
            } else {
                begin = mid + 1;
            }
        }
        nums.insert(nums.end(),target);
        sort(nums.begin(),nums.end());
        
        int begin2 = 0;
        int mid2;
        int end2 = nums.size() - 1;
        
        while (begin2 <= end2){
            mid2 = begin2 + (end2 - begin2) / 2;
            if (nums[mid2] == target){
                return mid2;
            }
            if (target < nums[mid2]){
                end2 = mid2 - 1;
            } else {
                begin2 = mid2 + 1;
            }
        }
        return -1;
        
    }
    
};
