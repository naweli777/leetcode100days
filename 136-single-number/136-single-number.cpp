class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int,int>freq;
        int ans;
        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if( freq[nums[i]]==1)
            {
                ans = nums[i];
            }
        }
        return ans;
    }
};