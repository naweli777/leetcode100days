class Solution {
public:
//     void oneRotate(vector<int>& nums)
//     { 
          
//     int s= nums.size();
        
//         int temp = nums[s-1];
//         for(int i=s-2; i>=0; i--)
//         {
//             nums[i+1] = nums[i];
            
            
//         } 
//     nums[0]=temp;
//     }
       
//     void rotate(vector<int>& nums, int k) {
        
//         for(int i=0; i<k; i++)
//         {
//             oneRotate(nums);
//         }    
    void rotate(vector<int>& nums, int k) {
    
     int n=nums.size();
        
		//Make copy 
        vector<int> copy(n);
		
        for(int i=0; i<n; i++){
            copy[i]=nums[i];
        }
        
        for(int i=0; i<n; i++){
            nums[(i+k)%n]=copy[i];
        }
    }
};