class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int msf = nums[0];
        int meh =0;
        int s=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            meh += nums[i];
            if(meh>msf)
            {
                msf =meh;
            }
            
            if(meh<0)
            {
                meh =0;
                s = i+1;
            }
        }
        return msf;
        
    }
};