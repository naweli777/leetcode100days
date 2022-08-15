class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int row = mat.size();
        int col = mat[0].size();
        
        if((row*col) != (r*c))
        {
            return mat;
        }
        
        vector<vector<int>>ans(r,vector<int>(c,0));
        
        int a=0;
        int b=0;
        
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                ans[a][b]= mat[i][j];
                b++;
                
                
                if(b ==c){
                    a++;
                    b=0;
                }
            }
        }
        return ans;
    }
};