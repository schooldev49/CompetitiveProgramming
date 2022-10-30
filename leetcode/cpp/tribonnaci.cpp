class Solution {
public:
    int tribonnaciT(int n, vector<int>&trib){

        if (n < 2) return n;
        if (trib[n]) return trib[n];
        else return trib[n] = tribonnaciT(n-1,trib) + tribonnaciT(n-2,trib) + tribonnaciT(n-3,trib); 
    }
    int tribonacci(int n) {
        if (n < 2) return n;
        vector<int> trib (n+1,0);
        trib[0] = 0;
        trib[1], trib[2] = 1;
        return tribonnaciT(n,trib);
    }
};
