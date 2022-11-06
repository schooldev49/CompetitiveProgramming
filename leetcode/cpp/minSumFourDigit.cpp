class Solution {
public:
    vector<int> numToVector(int num){
        vector<int> answer;

        while (num > 0){
            cout << num;
            answer.push_back(num%10);
            num /= 10;
        }

        return answer;
    }
    int minimumSum(int num) {
        vector<int> vec = numToVector(num);
        sort(vec.begin(),vec.end());
        return vec[0]*10+vec[1]*10+vec[2]+vec[3];
        //[2,2,3,9]
    }
};
