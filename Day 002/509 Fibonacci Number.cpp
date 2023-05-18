class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }
        else{
            int n1 = 0;
            int n2 = 1;
            int sum = 0;
            for(int i = 0; i < n-1; i++){
                sum = n1 + n2;
                n1 = n2;
                n2 = sum;
            } 
            return sum;
        }
       
    }
};