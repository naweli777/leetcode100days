class Solution {
public:
    int maxArea(vector<int>& height) {
        
        
//Brute Force
        
//         int maxi =0;

 
//         for(int i =0; i<height.size(); i++)
//         {
//             for(int j=0; j<height.size(); j++)
//             {
                
                
//             int minHeight =min(height[i],height[j]);
            
//             int area = minHeight *( j-i);
            
//             maxi = max(maxi, area);
                
//             }
        
            
            
        
         
//         }
//         return maxi;
        int ans =0;
        int i =0;
        int j = height.size()-1;
        while(i<j)
        {
            int minHeight = min(height[i], height[j]);
            int area = minHeight *(j-i);
            ans= max(ans, area);
            
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};