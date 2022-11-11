class Solution {
public:
    int max(int one, int two){
        return one > two ? one : two; // if one greater than two, return one. else return two.
    }
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0; // if there's 0 houses to rob, return 0 since you cant rob anything
        vector<int> alreadyRobbedHouses(nums.size()+1, 0); // create a vector with num of houses + 1 size and starting index 0
        alreadyRobbedHouses[0] = 0; // the first house
        alreadyRobbedHouses[1] = nums[0]; // the second house
        for (int i=1; i<nums.size(); i++){
            alreadyRobbedHouses[i+1] = max(alreadyRobbedHouses[i], alreadyRobbedHouses[i-1] + nums[i]); // get the house with the more money
        }
        return alreadyRobbedHouses[nums.size()]; // get the last index of the alreadyRobbedHouses (most $$)
    }
};
