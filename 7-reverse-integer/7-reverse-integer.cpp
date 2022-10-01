class Solution {
public:
    int reverse(int x) {
        long int ans =0; int temp=x; int rem =0;
        
        while(temp!=0)
        {
            rem = temp%10;
            ans = ans*10+rem;
            temp = temp/10;
        }
        if(ans <-2147483648 || ans>2147483648)
        {
            return 0;
        }
        return ans;
    }
};