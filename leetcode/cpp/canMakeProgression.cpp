class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int diff = arr[1] - arr[0]; // should be 
        int size = arr.size();
        
        for (int i=0; i<arr.size(); i++){
            if (i != size - 1 && arr[i] + abs(diff) != arr[i+1]){
                return false;
            }
        }
        return true;
        
    }

};
