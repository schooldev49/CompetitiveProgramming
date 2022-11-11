class Solution {
public:
    int dayOfYear(string date) {
        // usual days in the year
        vector<int> theDaysInTheYear = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        // answer
        int answer = 0;
        // year
        int year = stoi(date.substr(0,date.find("-")));
        date.erase(0,date.find("-"));
        date.erase(date.begin());
        // month
        int month = stoi(date.substr(0,date.find("-")));
        date.erase(0,date.find("-")); 
        date.erase(date.begin());
        // adding 31 
        if (month >= 2) answer += 31;
        // day
        int day = stoi(date.substr(0,date.size()));
        // previous days
        for (int i=1; i<month-1; i++){
            answer += theDaysInTheYear[i];
        }
        // # days
        answer += day;

        // leap year handler
        if (month > 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0 )) answer++;
        
        // return value
        return answer;
    }
};
