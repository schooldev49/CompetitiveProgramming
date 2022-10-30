class Solution {
public:
   
    int climbStairs(int n) {
        vector<int> steps (n+1,0);
        if (n < 2) return n;
        steps[0] = 1;
        steps[1] = 1;
        steps[2] = 2;
        int answer = 0;
        int sus = n;
        for (int i=3; i<= n; i++){
            steps[i] = steps[i-1] + steps[i-2];
        }
        
        return steps[n];
        
    }
};


// either climb 1 step or 2 at time
// example
// 1 + 1, 2 
