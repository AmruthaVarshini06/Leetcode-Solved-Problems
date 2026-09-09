class Solution {
public:
    long long countCommas(long long n) {
        long long res = 0;
        for(long long i = 1000, commas = 1; i <= n; i *= 1000, commas++){
            long long j = min((long long)n, i * 1000 - 1);
            res += (j - i + 1) * commas;
        }
        return res;
    }
};
