class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        //checking if the no. of elements same for reshaping if yes then rehape
        vector<vector<int>> reshape(r,vector<int>(c));
        if(m*n!=r*c){
            return mat;
        }
        /*Approach- put all the elements of the given matrix in a 1d vector then run a nestedloop for r*c matrix and insert the  elements of the 1D vector when taversing*/
        vector<int>elements;
        for(auto& row:mat){
            for(int x:row){
                elements.push_back(x);
            }
        }
        int counter=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                reshape[i][j]=elements[counter];
                counter++;
            }
        }
        return reshape;
        
    }
};
