class Solution
{
  public:
  vector<int> intersection(vector<int>& nums1,vector<int>& nums2)
  {
    int i=0,j=0;
    int m=nums1.size(),n=nums2.size();
    vector<int> result;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    while(i<m && j<n)
    {
        if(nums1[i]==nums2[j])
          {
            result.push_back(nums1[i]);
             i++;
             j++;
          }
        else if(nums1[i]>nums2[j])
          j++;
        else
         i++; 
        while(i>0 && i<m && nums1[i]==nums1[i-1])
          i++;
        while(j>0 && j<n && nums2[j]==nums2[j-1])
          j++;   
    }
    return result;
 }
};