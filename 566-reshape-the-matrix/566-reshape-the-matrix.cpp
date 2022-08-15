class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        // rows and columns of given matrix 
        int row = mat.size();
        int col = mat[0].size();
        
        // condition for reshaping possible or not
        if((row*col) != (r*c))
        {
            return mat;
        }
        vector<vector<int>> ans(r, vector<int>(c,0));
        int row_num = 0;
        int col_num = 0;
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                // filling up ans column wise first
                ans[row_num][col_num] = mat[i][j];
                col_num++;
                // if column is fulfilled
                if(col_num == c)
                {
                    // going to the next row
                      row_num++;
                    // starting from first column
                    col_num = 0;
                  
                }
            }
        }
        return ans;
        
    }
};