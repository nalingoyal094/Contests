class Solution {
public:
    int countQuadruplets(vector<int>& nums)
    {
        int count=0;
        for (int i=0;i<=nums.size()-4;i++)
        {
            for (int j=i+1;j<=nums.size()-3;j++)
            {
                for (int k=j+1;k<=nums.size()-2;k++)
                {
                    for (int l=k+1;l<=nums.size()-1;l++)
                    {
                        if (nums[i]+nums[j]+nums[k]==nums[l])
                        {
                            count++;
                        }
                    }
                }
            }
        }
        return count;
        
    }
};


T.C=O(n^4)


class Solution {
public:
    
    int countQuadruplets(vector<int>&nums)
    {
        
        map<int ,int >mp;
        
        int n=nums.size();
        int ans=0;
        mp[nums[n-1]]=1;
        
        for (int i=n-2;i>=2;i--)
        {
            for(int j=i-1;j>=1;j--)
            {
                for (int k=j-1;k>=0;k--)
                {
                    if (mp[nums[i]+nums[j]+nums[k]])
                        
                    {
                        ans+=mp[nums[i]+nums[j]+nums[k]];
                    }
                }
            }
            mp[nums[i]]++;
        }
        
        return ans;
    }
    
    
};



T.C=O(n^3)


