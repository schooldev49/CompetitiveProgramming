
// return 1 if x pos
// return -1 if x neg
// return 0 if x = 0

// nums = [array]<int>
class Solution {
public:
    int signFunc(int num){
        if (num > 0){
            return 1;
        } else if (num < 0) { 
        return -1;
        } else if (num == 0) {
            return 0;
        } else {
            return 200;
        }
    } 
    int arraySign(vector<int>& nums) {
        int product = 1;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] > 1) nums[i] = 1;
            if (nums[i] < -1) nums[i] = -1;
            product = product * nums[i];
        }
        return signFunc(product);
        
    }
};
