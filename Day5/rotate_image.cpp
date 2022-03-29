// Rotate Image

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        //transpose
        for (int i=0;i<matrix.size();i++)
        {
            for (int j=i+1;j<matrix[0].size();j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        //column:
        for (int i=0;i<matrix.size();i++)
        {
            int low=0;
            int high=matrix.size()-1;
            while(low<high)
            {
                swap(matrix[i][low],matrix[i][high]);
                low+=1;
                high-=1;
            }
        }
        
    }
};
