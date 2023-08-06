class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        vector<vector<int>> arr(n , vector<int> (n , 1) ) ; 
          for(int j = 0; j < n  ; j++) {
              for(int i = n-1, ii = 0  ; i >=0 ; i-- , ii++){
                  arr[j][ii] = matrix[i][j] ;   
              }
          }
          matrix = arr ;
         return ;
    }
};