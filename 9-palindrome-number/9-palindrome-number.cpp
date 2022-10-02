class Solution {
public:
    bool isPalindrome(int x) {
        int temp =x;
        int long rev =0;
        
        while(temp)
        {
            int rem = temp%10;
            rev = rev*10+ rem;
            temp = temp/10;
            
           
            
        }
         if(rev!=x || x <0)
         {
             return false;
         }
        return true;
    }
};