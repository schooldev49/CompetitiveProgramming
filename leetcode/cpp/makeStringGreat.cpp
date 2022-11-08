class Solution {
public:
    bool isUpper(char i){
        return tolower(i) != i;
    }
    bool isLower(char i){
        return tolower(i) == i;
    }
    string makeGood(string s) {
        if (s.size() < 2) return s;
        stack<char> answer;
        
        for (int i=0; i<s.size(); i++){
            if (answer.empty()){
                answer.push(s[i]);
                continue;
            }
            if (isUpper(answer.top()) && isLower(s[i]) && tolower(answer.top()) == tolower(s[i]) || isLower(answer.top()) && isUpper(s[i]) && tolower(answer.top()) == tolower(s[i])){
                answer.pop();
                continue;
            } else {
                answer.push(s[i]);
                continue;
            }
        }
        string yeah;
        
        while (!answer.empty()){
            yeah.push_back(answer.top());
            answer.pop();
        }
        reverse(yeah.begin(),yeah.end());
        return yeah;
    }
};
