class Solution {
public:
    int minValue(int A, int B, int C) {
        // Write the first step below:
        vector<int> integers;
        integers.push_back(A);
        integers.push_back(B);
        integers.push_back(C);
        int lowestNumber = INT_MAX;
        
        for (int i=0; i<3; i++){
            if (integers[i] < lowestNumber) {
                lowestNumber = integers[i];
            }
        }
        return lowestNumber;
    }
};


