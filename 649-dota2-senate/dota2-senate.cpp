class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> dire, radiant;
        int n = senate.length();
        for(int i = 0; i < n; i++){
            if(senate[i] == 'D'){
                dire.push(i);
            }
            else{
                radiant.push(i);
            }
        }
        while(!dire.empty() && !radiant.empty()){
            int dfront = dire.front(), rfront = radiant.front();
            if(min(dfront, rfront) == dfront){
                radiant.pop();
                dire.push((dfront + n));
                dire.pop();
            }
            else if(min(dfront, rfront) == rfront){
                dire.pop();
                radiant.push((rfront + n));
                radiant.pop();
            }
        }
        if(radiant.empty()){
            return "Dire";
        }    
        return "Radiant";
    }
};