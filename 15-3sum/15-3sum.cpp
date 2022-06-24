class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            int tgt = -nums[i];
            int l=i+1;
            int h=n-1;
            while(l<h){
                if(nums[l]+nums[h]==tgt){
                    s.insert({nums[i],nums[l],nums[h]});
                    l++;
                    h--;
                }
                else if(nums[l]+nums[h]<tgt) l++;
                else h--;
            }
        }
        for(auto i:s) ans.push_back(i);
        return ans;
        
    }
};