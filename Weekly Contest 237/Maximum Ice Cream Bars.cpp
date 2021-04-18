class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        sort(costs.begin(),costs.end());
        int i=0;int ans=0;
        while(coins-costs[i]>=0)
        {
            ans++;
            coins-=costs[i];
            i++;
            if (i==costs.size())
                break;
        }
        return ans;
    }
};
