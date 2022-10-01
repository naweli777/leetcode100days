class Solution {
public:
    int reverse(int x) {
        int temp = x;
        long int rev = 0;
        int rem = 0;
        while(temp!=0)
        {
            rem = temp%10;
            rev = rev*10 + rem;
            temp = temp/10;
            if(rev < -2147483648 || rev > 2147483647)
            {
                return 0;
            }
        }
        return rev;
    }
};