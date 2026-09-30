class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, int> losscnt;
        for(auto m : matches){
            int winner = m[0];
            int loser = m[1];
            if(losscnt.find(winner) == losscnt.end()){
                losscnt[winner] = 0;
            }
            losscnt[loser]++;
        }
        vector<int> zerocnt, onecnt;
        for(auto [p, l] : losscnt){
            if(l == 0){
                zerocnt.push_back(p);
            }
            else if(l == 1){
                onecnt.push_back(p);
            }
        }
        return {zerocnt, onecnt};
    }
};