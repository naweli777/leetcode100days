class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        
        int i=0; 
        int j=1;
        
        while(j <nums.size())
        {
            if((nums[i]==0 && nums[j] !=0))
            {
                swap(nums[i],nums[j]);
            }
            else if((nums[i] ==0 && nums[j]==0))
            {
                j++;
                continue;
            }
            i++;
            j++;
        }
        
        
        //Extra space solution//
//       vector<int>temp;
//         for(int i=0; i<nums.size(); i++)
//         {
//             if(nums[i] !=0)
//             {
//               temp.push_back(nums[i]);
//             }
          
//         }
        
//         for(int i=temp.size(); i<nums.size(); i++)
//         {
//             temp.push_back(0);
//         }
//         nums = temp;
        //Extra space solution ends//
        
 
        
        
    }
};