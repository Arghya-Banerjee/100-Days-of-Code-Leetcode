class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int posi = 0;
        int negi = 1;
        for(int i = 0; i < n; i++){
            int m = nums.at(i);
            if(m > 0){
                ans[posi] = m;
                posi += 2;
            }
            else{
                ans[negi] = m;
                negi += 2;
            }
        }
        return ans;
    }
};