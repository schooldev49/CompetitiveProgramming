class Solution {
public:
    int getDigits(int x, vector<int>&vec){
        int ans = 0;
        while (x>0){
            vec.push_back(x%10);
            x -= x%10;
            x/=10;
            ans++;
        }
        return ans;
    }
    bool isPalindrome(int x) {
        if (x < 0) return 0;
        vector<int> vec;

        int digits = getDigits(x,vec);
        vector<int> clone(vec);
        reverse(vec.begin(),vec.end());
        if (vec == clone) return 1;
        return 0;
    }
};
