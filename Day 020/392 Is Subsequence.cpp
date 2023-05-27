class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;
        int n = s.length();
        int m = t.length();
        int p = 0;
        for(int i = 0; i < m; i++){
            if(t[i] == s[p]){
                count++;
                p++;
            }
        }
        // cout << count << endl;
        return(count == n);
    }
};