class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     unordered_map<int,int> map;
        for(auto i:nums)
            map[i]++;
        for(auto i:map)
            if(i.second>1)return true;
        return false;
    }
};