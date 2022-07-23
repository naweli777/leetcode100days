class Solution {
public:
    int pivotIndex(vector<int>& nums) {

		int sum=0;
        int lsum=0;
        
        if(nums.size()==0) return -1; // check whether it has any element or not
		
      //calculate the whole sum of the array   
     for(int i=0;i<nums.size();i++) sum=sum+nums[i];
	 
        for(int i=0;i<nums.size();i++){
            if(lsum==sum-lsum-nums[i]) return i; 
            lsum=lsum+nums[i]; //need to update lsum also 
        }
        return -1;
    }
};
//          int i=0;
//         int j=nums.size()-1;
        
//         int lsum=nums[0];
//         int rsum =nums[j];
        
       
//         while(i<=j)
//         {  
//             if(lsum<rsum)
//             {
                 
//                 i++;
//                 lsum+=nums[i];
//                 if(lsum==rsum)
//                 {
//                     return i;
//                 }
//             }
//             else if(rsum<lsum)
//             {
               
//                 j--;
//                  rsum +=nums[j];
//                  if(lsum==rsum)
//                 {
//                     return i;
//                 }
//             }
//             else
//             {
//                 return -1;
//             }
            
//         }
//         return{};
