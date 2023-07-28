class Solution {
public:  
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size()  ;
    int row[n] ;
    int col[m] ;
    for(int i = 0 ; i < n ; i++){
        row[i] = 0 ;
    }
    for(int i = 0 ; i < m ; i++){
          col[i] = 0 ;  
    }

    // Traverse the matrix
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j< m ; j++) {
            if(matrix[i][j] == 0 ) {
                // mark the ith index of row with 1 ;
                row[i] = 1 ;
                // mark the jth index of col with 1 ;
                col[j] = 1 ;
            }
        }
    }

     for(int i  = 0 ; i < n ; i++) {
         for(int j =  0 ;j< m ; j++) {
             if(row[i]==1 || col[j] ==1) {
                 matrix[i][j] = 0 ;
             }
         }
     }
  return  ;
    }    
};