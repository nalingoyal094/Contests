class Solution {
public:
    
    int sum_of_digits(int n)
    {
        int ans=0;
        
        while(n>0)
        {
            ans+=n%10;
            n=n/10;
        }
        return ans;
    }
    
    int sumBase(int n, int k) {
        
        int num=0;
       int i=0;
        while(n>0)
        {
            num+=(n%k)*pow(10,i);
            i++;
            n=n/k;
        }
        return sum_of_digits(num);
        
    }
};