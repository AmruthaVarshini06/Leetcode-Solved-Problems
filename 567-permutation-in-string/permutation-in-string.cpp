class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 > n2) return false;
        vector<int> s1cnt(26, 0);
        vector<int> s2cnt(26, 0);
        for(int i = 0; i < n1; i++){
            s1cnt[s1[i] - 'a']++;
            s2cnt[s2[i] - 'a']++;
        }
        if(s1cnt == s2cnt) return true;
        for(int i = n1; i < n2; i++){
            s2cnt[s2[i] - 'a']++;
            s2cnt[s2[i - n1] - 'a']--;
            if(s1cnt == s2cnt) return true;
        }
        return false;
    }
};