#define f(i,a,b) for (int i=a; i<b; i++)

class Solution {
public:

    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        f (i, 0, operations.size()) {
            if (operations[i] == "X++"||operations[i]=="++X")x++; else x--;
        }

        return x;
    }
};
