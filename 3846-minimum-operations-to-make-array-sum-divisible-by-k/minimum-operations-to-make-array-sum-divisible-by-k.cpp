class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        long long total_sum = 0;
        for(int i : nums){
            total_sum += i;
        }
        return total_sum % k;
    }
};