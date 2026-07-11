class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size()-1;i++){
            for(int j=i+1;j<matrix[0].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //n2
        int sz=matrix[0].size();
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size()/2;j++){
                swap(matrix[i][j],matrix[i][sz-j-1]);
            }
        }
        //n2
    }
};