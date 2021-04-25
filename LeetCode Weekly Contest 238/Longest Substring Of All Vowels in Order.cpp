class Solution {
public:
    int longestBeautifulSubstring(string word) {
        
        map<char,int>mp;
        int len=0;
        int max_len=0;
        for (int i=0;i<word.size();i++)
        {
            if (i==0)
            {
                mp[word[i]]++;
                len=1;
                continue;
            }
            if (word[i]>=word[i-1])
            {
                mp[word[i]]++;
                
                len++;
                
                continue;
            }
            else
            {
                // 
                if (mp['a']!=0 && mp['e']!=0 && mp['i']!=0 && mp['o']!=0 && mp['u']!=0)
                {
                    max_len=max(max_len,len);
                }
                
                len=1;
                mp.clear();
                mp[word[i]]=1;
                
            }
           
            
            
        }
        
        // aeiou
        
         if (mp['a']!=0 && mp['e']!=0 && mp['i']!=0 && mp['o']!=0 && mp['u']!=0)
                {
                    max_len=max(max_len,len);
                }
        return max_len;
        
        
    }
};