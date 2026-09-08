class Solution {
public:
    int subsum(vector<int> &nums, int goal){
        int left = 0, sum = 0, cnt = 0;
        if(goal < 0) return 0;
        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];
            while(sum > goal){
                sum -= nums[left];
                left++;
            }
            cnt += (right - left + 1);
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int greater = subsum(nums, goal);
        int smaller = subsum(nums, goal - 1);
        return greater - smaller; 
    }
};