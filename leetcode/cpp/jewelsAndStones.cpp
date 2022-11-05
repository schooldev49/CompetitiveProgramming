class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int answer = 0;
        for (char i : stones){
            if (jewels.find(i) != string::npos){
                answer++;
            }
        }
        return answer;
    }
};
