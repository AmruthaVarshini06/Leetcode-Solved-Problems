class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sumcount;
        int total_tuples = 0;
        for(int i : nums1){
            for(int j : nums2){
                sumcount[i + j]++;
            }
        }
        for(int i : nums3){
            for(int j : nums4){
                int target = -(i + j);
                if(sumcount.find(target) != sumcount.end()){
                    total_tuples += sumcount[target];
                }
            }
        }
        return total_tuples;
    }
};