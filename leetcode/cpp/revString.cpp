class Solution {
public:
    void swap(int i, int b, vector<char>&s){
        char temp = s[i];
        s[i] = s[b];
        s[b] = temp;
    }
    void reverseString(vector<char>& s) {
        int pt1 = 0;
        int pt2 = s.size()-1;
        while (pt1<pt2){
            swap(pt1,pt2,s);
            pt1++;
            pt2--;
        }
        
        
    }
};
