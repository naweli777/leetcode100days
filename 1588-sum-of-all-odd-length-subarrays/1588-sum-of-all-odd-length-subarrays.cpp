class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
          int res=0;
        for(int i=0;i<arr.size();i++)
        {
            int sum=0;
            for(int j=i;j<arr.size();j++)
            {
                sum=sum+arr[j];
                if(!((j-i)%2)) res+=sum;
            }
        }
        
        return res;
        
    }
};