class Solution {
public:
    int changeNum(int n){
        int sum = 0;
        while(n > 0){
            int temp = n%10;
            sum = sum += (temp*temp);
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> ans;
        while(n!=1 && !ans.count(n)){
            ans.insert(n);
            n = changeNum(n);
        }
        return n==1;
    }
};