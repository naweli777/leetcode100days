class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int sum1=0;
       
   
        
        for(int i=0; i <k; i++)
        {
            sum1 += cardPoints[i];
        }
        
        
        int ans= sum1; 
        for(int i=k-1; i>=0; i--)
        {
            ans -=cardPoints[i];
            ans += cardPoints[cardPoints.size()-k+i];
            
            sum1= max(sum1,ans);
        }
        
       
        return sum1;
       
        
    }
};