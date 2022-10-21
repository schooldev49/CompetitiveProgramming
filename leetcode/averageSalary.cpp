using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;
        sort(salary.begin(),salary.end());
        int end = salary.size() - 1;
        for (int i=0; i<salary.size(); i++){
            if (salary[i] > salary[0] && salary[i] < salary[end]){
                total += salary[i];
            }
        }
        return total / (end - 1);
    }
};
