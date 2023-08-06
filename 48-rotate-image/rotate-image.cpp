class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size() ;
        vector<vector<int>> arr(n , vector<int> (n , 1) ) ; 
          for(int j = 0; j < n  ; j++) {
              for(int i = n-1, ii = 0  ; i >=0 || ii < n ; i-- , ii++){
                  arr[j][ii] = matrix[i][j] ;   
              }
          }
          matrix = arr ;

        // for(int i = 0; i < n ; i++) {
        //       for(int j = 0  ; j < n ; j++  ){
        //            matrix[i][j] =  arr[i][j];
        //       }
        //   }
         return ;
    }
};