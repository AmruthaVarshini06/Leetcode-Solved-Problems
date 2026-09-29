class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = 0;
        for(int p : piles){
        high = max(high, p);
        }
        int result = high;
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long tot = 0;
            for(int p : piles){
                tot += (p / mid) + (p % mid != 0);
            }
            if(tot <= h){
                result = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return result;
    }
};