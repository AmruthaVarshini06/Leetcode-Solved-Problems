class Solution {
public:
    bool isThree(int n) {
        int divisor_cnt = 0;
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                divisor_cnt++;
            }
        }
        return divisor_cnt == 3;
    }
};