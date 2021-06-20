class Solution {
public:
    string largestOddNumber(string num) {
        int max_index=0;int flag=0;
        for (int i=0;i<num.size();i++)
        {
            
           
            if ((num[i]-'0')%2!=0)
            {flag=1;
                
                      max_index=i;    

            }
            
        }
        
        
        
        if (flag==0)
        {
            return "";
        }
        
        
        
        return num.substr(0,max_index+1);
        
    }
};
