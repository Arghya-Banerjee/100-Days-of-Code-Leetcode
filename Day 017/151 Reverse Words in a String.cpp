class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int n = s.size();
        int i = 0;
        while(i < n){
            string tmp = "";
            while(s[i] == ' ' && i < n){
                i++;
            }
            while(s[i] != ' ' && i < n){
                tmp += s[i];
                i++;
            }

            if(tmp.size() > 0){
                if(ans.size() == 0){
                    ans = tmp;
                }
                else{
                    ans = tmp + " " + ans;
                }
            }
        }
        return ans;
    }
};