class Solution {
public:
    int countOdds(int low, int high) {
        if (((high - low + 1) % 2) == 0){
            return ((high - low + 1) / 2);
        } else {
            int ok = high - low;
            int num = 0;
            for (int i=low; i<=high; i++){
                if ((i % 2) != 0){
                    num++;
                }
            }
            return num;
        }
    }
};
