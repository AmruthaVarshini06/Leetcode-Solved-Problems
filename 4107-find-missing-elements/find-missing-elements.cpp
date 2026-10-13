class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini = nums[0], maxi = nums[0];
        for(int i : nums){
            mini = min(mini, i);
            maxi = max(maxi, i);
        }
        unordered_set<int> presence(nums.begin(), nums.end());
        vector<int> missing;
        for(int i = mini + 1; i < maxi; i++){
            if(presence.find(i) == presence.end()){
                missing.push_back(i);
            }
        }
        return missing;
    }
};