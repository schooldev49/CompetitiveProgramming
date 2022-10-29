class Solution {
public:
    long long int pow(int a, int b){
        if (b == 0) return 1;
        
        int temp = pow(a,b/2);
        
        if (b%2 == 0) return ((temp%1337)*temp%1337)%1337;
        else return (a%1337*((temp%1337*temp%1337)%1337))%1337;
    }
    long long int superPow(int a, vector<int>& b) {
        long long int answer1 = 0;
        if (b.size() == 0) return 1;
        
        int x = b.back();
        
        b.pop_back();
      
        
        return pow(superPow(a,b),10)*pow(a,x)%1337;
    }
};
/*

PLAN OUT


REMOVE LAST ELEMENT OF ARRAY

RECURSIVE POW

1337 MOD

*/
