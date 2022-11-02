class Solution {
public:
    int max(int one, int two){
        return one > two ? one : two;
    }
    int rob(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        vector<int> alreadyRobbedHouses(nums.size()+1, 0);
        int answer = 0;
        alreadyRobbedHouses[0] = 0;
        alreadyRobbedHouses[1] = nums[0];
        
        for (int i=1; i<nums.size(); i++){
            alreadyRobbedHouses[i+1] = max(alreadyRobbedHouses[i], alreadyRobbedHouses[i-1] + nums[i]);
        }
        return alreadyRobbedHouses[nums.size()];
    }
};


/*
if (2 adjacent houses broken in same night){
contactPolice();
}


return maxMoney  withoutAlertingPolice();

if (index[3] )

pLan out


index[1] + index[1+2] + index[1 + 4] + .... + index[1+n] = x;







*/
