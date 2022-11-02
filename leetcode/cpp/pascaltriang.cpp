class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        
        for (int i=0; i<numRows; i++){
            answer.push_back(vector<int>(i+1,1));
            for (int q=1; q<i; q++){
                answer[i][q] = answer[i-1][q-1] + answer[i-1][q]; 
            }
        }
        
        return answer;
    }
};
