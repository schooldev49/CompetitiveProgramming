class Solution {
public:
    int absolute(int d){
        return d >= 0 ? d : 0-d;
    }
    int getMin(int a, int b){
        return a < b ? a : b;
    }
    int getMax(int a, int b){
        return a > b ? a : b;
    }
    int maxDistance(vector<int>& colors) {
        int indexMin = INT_MAX;
        int answer = 1;
        for (int i=0; i<colors.size(); i++){
            if (colors[i] != colors[0]) {
                indexMin = getMin(i,indexMin);
                answer = i;
            } else {
                answer = getMax(answer, i-indexMin); 
            }
        }
        return answer;
    }
};
