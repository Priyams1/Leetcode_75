class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> ans(candies.size(), false);
        int maxi = 0;

        for(int i = 0; i < candies.size(); i++)
        {
            maxi=max(candies[i], maxi);
        }
        for(int i = 0; i < candies.size();i++)
        {
            if((candies[i] + extraCandies) >= maxi)
            {
                ans[i] = true;
            }
            // ans[i] = false;
        }
        return ans;
    }
};
