class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> place(n, 0);
        for(auto i : bookings){
            int a = i[0] - 1, b = i[1] - 1, c = i[2];
            place[a] += c;
            if(b + 1 < n){
                place[b + 1] -= c;
            }
        }
        for(int i = 1; i < n; i++){
            place[i] += place[i - 1];
        }
        return place;
    }
};