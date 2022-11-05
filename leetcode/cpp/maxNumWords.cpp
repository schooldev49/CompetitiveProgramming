class Solution {
public:
    int numberOfWords(string word){
        int num = 1;
        for (char i: word){
            if (i == ' ') num++;
        }
        return num;
    }
    int mostWordsFound(vector<string>& sentences) {
        int maxLength = INT_MIN;
        for (int i=0; i<sentences.size(); i++){
            int numq = numberOfWords(sentences[i]);
            if (numq > maxLength) maxLength = numq;
        }

        return maxLength;
    }
};
