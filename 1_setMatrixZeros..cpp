#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int r = 1,c = 1;
    int rows = matrix.size(),cols = matrix[0].size();
    for(int i =0;i<rows;++i){
        for(int j = 0;j<cols;++j){
            if (i == 0 && matrix[0][j] == 0) r = 0;
            else if(j ==0 && matrix[i][0] == 0) c = 0;
            else if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                
            }
        }
    }
    for(int i = rows-1;i >=0;--i){
        for(int j =cols-1;j >= 0;--j){
            if (i == 0 && r == 0) matrix[i][j] = 0;
            if(j ==0 && c == 0) matrix[i][j] =0;
            if (matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }
    
}