class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        
        
//         unordered_map<int>m;
        
//         for(int i =0; i<nums.size(); i++)
//         {
//             if(m.finds)
//         }
    
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                ans.push_back(nums[i]);
            }
         
        }
      return ans;
    }
};