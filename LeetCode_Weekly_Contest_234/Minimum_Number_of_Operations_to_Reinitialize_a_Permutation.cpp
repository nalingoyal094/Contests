class Solution {
public:
    int reinitializePermutation(long long int n) {
        
        long long int i=1;
        long long int cnt=0;
        /*while(i*2<=n-1)
        {
            cnt++;
            i=i*2;
        }
       // cout<<i<endl;
        
        while(i>1)
        {i=(i-n/2)*2 + 1;
         cnt++;
         }
        */
        
        while(i*2<=n-1)
        {
            cnt++;
            i=i*2;
        }
        
        while(i!=1)
        {
            if(i<n/2)
            {
                cnt++;
            i=i*2;
                
            }
            else
            {
               i=(i-n/2)*2 + 1;
         cnt++; 
            }
        }
        
        if (cnt<1)
        {
            return 1;
        }
        
        return cnt;
    }
};
