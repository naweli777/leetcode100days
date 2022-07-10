class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> dummy( numRows);
        
        for(int i=0; i<numRows;  i++)
        {
            dummy[i].resize(i+1);
            dummy[i][0] = dummy[i][i]=1;
            
            for(int j=1; j<i; j++)
            {
                dummy[i][j]=dummy[i-1][j-1] + dummy[i-1][j];
            }
        }
        return dummy;
    }
};