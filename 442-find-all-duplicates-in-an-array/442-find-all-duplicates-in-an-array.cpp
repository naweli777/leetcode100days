class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        
        
        unordered_set<int>m;
        
        for(int i =0; i<nums.size(); i++)
        {
            if(m.find(nums[i]) != m.end())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                m.insert(nums[i]);
            }
        }
    return ans;
        
        //2nd approch
//         sort(nums.begin(), nums.end());
//         for(int i=1; i<nums.size(); i++)
//         {
//             if(nums[i] == nums[i-1])
//             {
//                 ans.push_back(nums[i]);
//             }
         
//         }
//       return ans;
    }
};