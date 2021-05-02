class Solution {
public:
    int getMinSwaps(string num, int k) {
        
        int i=0;
        string str=num;
        do
        {
            i++;
            if (i==k+1)
            {
                cout<<str<<endl;
                break;
            }
            
        }
        while(next_permutation(str.begin(),str.end()));
        int ans=0;
        i=0;
        int j=0;
        while(i<num.size())
        {
            
            if (str[i]==num[j])
            {
                i++;j++;
                continue;
            }
            
            if (str[i]!=num[j])
            {
                while(num[j]!=str[i])
                {
                    j++;
                }
                
                while(i!=j)
                {
                    swap(num[j],num[j-1]);
                    ans++;
                    j--;
                }
                
            }
            i++;j++;
            
        }
        
     return ans;   
        
    }
};

//o(n*n) for swapping and o(n*k) for finding kth permutation
