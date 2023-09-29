class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        bool ans = {false};
        int count0 = 0;
        for(int i = 0; i < flowerbed.size(); i++)
        {
            if(flowerbed[i] == 0)
            {
                count0++;
            }
        }
            if(count0 == (flowerbed.size())/2)
            {
                if(n < (flowerbed.size() - count0))
                {
                    ans = true;
                }

            }
            if(count0 > (flowerbed.size())/2)
            {
                if(n <= (flowerbed.size() - count0))
                {
                    ans = true;
                }
            }
        return ans;
    }
};
