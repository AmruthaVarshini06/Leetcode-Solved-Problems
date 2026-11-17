class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> scoreidx;
        for(int i = 0; i < n; i++){
            scoreidx.push_back({score[i], i});
        }
        sort(scoreidx.begin(), scoreidx.end(), greater<pair<int, int>>());
        vector<string> ans(n);
        for(int i = 0; i < n; i++){
            int ori = scoreidx[i].second;
            if(i == 0){
                ans[ori] = "Gold Medal";
            }
            else if(i == 1){
                ans[ori] = "Silver Medal";
            }
            else if(i == 2){
                ans[ori] = "Bronze Medal";
            }
            else{
                ans[ori] = to_string(i + 1);
            }
        }
        return ans;
    }
};