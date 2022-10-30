class Solution {
public:
    int fibR(int n, vector<int>&memvalues){
        if (n < 2) return n;
        if (memvalues[n]) return memvalues[n];
        else return memvalues[n] = fibR(n-1,memvalues) + fibR(n-2,memvalues);
    }

    int fib(int n) {
        // F(n) = F(n - 1) + F(n - 2), for n > 1.
        vector<int> memvalues (n+1,0); 
        return fibR(n,memvalues);
        
        // F(N)= F(N-1) + F(n-2)
        
        
    }
};
