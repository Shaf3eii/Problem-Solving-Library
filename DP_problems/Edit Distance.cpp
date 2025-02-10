// https://leetcode.com/problems/edit-distance/description/


class Solution {
    int dp[505][505];
    string s1, s2;
    int editDistance(int idx1, int idx2) {
        if (idx1 == (int)s1.size()) 
            return (int)s2.size() - idx2;
        if (idx2 == (int)s2.size()) 
            return (int)s1.size() - idx1;

        auto& ret = dp[idx1][idx2];
        if (~ret) return ret;
        if (s1[idx1] == s2[idx2]) {
            return ret = editDistance(idx1 + 1, idx2 + 1);
        }
        int insert = 1 + editDistance(idx1 + 1, idx2);
        int delete_ = 1 + editDistance(idx1, idx2 + 1);
        int change = 1 + editDistance(idx1 + 1, idx2 + 1);
        return ret = min(min(insert, delete_), change);
    }
public:
    int minDistance(string word1, string word2) {
        s1 = word1;
        s2 = word2;
        memset(dp, -1, sizeof dp);
        return editDistance(0, 0);
    }
};
