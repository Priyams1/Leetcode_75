class Solution {
public:
    string mergeAlternately(string word1, string word2)
    {

        int n = word1.size();
        int m = word2.size();
        
        string ans;

        int j = 0;
        int k = 0;

        for (int i = 0; i < n + m; i++)
        {
            if (j < n)
            {
                ans += word1[j];
                j++;
            }
            if (k < m)
            {
                ans += word2[k];
                k++;
            }
        }
        return ans;
    }
};
