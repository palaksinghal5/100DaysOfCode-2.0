class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        #Transpose Matrix
        if (matrix.size()!=1){
            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<i;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            #Reverse Matrix
            for(int i=0;i<matrix.size();i++){
                reverse(matrix[i].begin(),matrix[i].end());
            }
        } 
    }
};