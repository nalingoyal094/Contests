class Solution {
public:
    int numDifferentIntegers(string word) {
        int flag=0;
        set<string>s;
        string num="";
        s.insert(num);
        for (int i=0;i<word.size();i++)
        {
            if (word[i]>='a' && word[i]<='z')
            {
                s.insert(num);
                num="";
            }
            else
            {
                if (word[i]=='0')
                {
                    if (num.size()!=0 || (i+1<word.size() && word[i+1]>='a' && word[i+1]<='z' ))
                    {
                        num=num+'0';
                    }
                    
                }
                else
                {
                    num=num+word[i];
                    
                }
            }
        }
        s.insert(num);
        
        
        for (auto i:s)
        {
            cout<<i<<endl;
        }
        
        
        return s.size()-1;
        
    }
};
