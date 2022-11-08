class Solution {
public:
    int minOperations(string s) {
        if (s.length() < 2) return 0;
        int ans = 0;
        string e = "01";
        for (int i=0; i<s.length(); i++){
            cout << s[i] << " " << s[i+1] << " \n";
            if (s[i] != e[i%2]){
             ans++;
             s[i] = e[i%2];
            } 
        }
        return min(ans,(int)s.length()-ans);

    }
};
