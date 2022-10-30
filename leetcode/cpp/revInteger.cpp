class Solution {
public:
    int reverse(int x) {
        if (x >= INT_MAX || x <= INT_MIN) return 0;
        string yes = to_string(x);
        vector<char> answer2;
        string answer1;
        int answer;
        bool isNeg = false;
        
        if (x < 0){
            isNeg = true;
            x = 0 - x;
        }
        for (char i : yes){
            
            answer2.push_back(i);
        }
        
        for (int i=answer2.size()-1; i>=0; i--){
            answer1 += answer2[i];
        }
         stringstream ss;  
         ss << answer1;
         ss >> answer;
        if (answer >= INT_MAX || answer <= INT_MIN) return 0;
        if (isNeg) answer = -1 * answer;
        
        return answer;
    }
};
