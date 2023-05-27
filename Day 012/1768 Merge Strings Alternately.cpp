class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int n = word1.length();
        int m = word2.length();
        if(n > m){
            for(int i = 0; i < n; i++){
                ans = ans + word1[i];
                if(i < m){
                    ans = ans + word2[i];
                }
            }
        }
        else{
            for(int j = 0; j < m; j++){
                if(j < n){
                    ans = ans + word1[j];
                }
                ans = ans + word2[j];
            }
        }
        return ans;

    }
};