class Solution {
public:
    double myPow(double x, int n) {
        double num = 1;
        long long p = n;
        if(p < 0) p = -p;
        while(p>0){
            if(p%2==1){
                num = num * x;
                p--;
            }
            else{
                x = x*x;
                p/=2;
            }
        }
        if(n < 0){
            num = 1.0/num;
        }
        return num;
    }
};