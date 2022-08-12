class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>::iterator it;
         for(int i =1;i<nums.size();i++)
             if(nums.at(i)==nums.at(i-1))return true;
         return false;
        
    }
};