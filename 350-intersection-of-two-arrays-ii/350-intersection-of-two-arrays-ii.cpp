class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>m;
        vector<int>ans;
        
        for(auto nums:nums1)
        {
            m[nums]++;
        }
        for(auto nums: nums2)
        {
            if(m[nums])
            {
                ans.push_back(nums);
                m[nums]--;
            }
        }
        return ans;
    }
};