class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        
        int dip_index = -1 ;
        int n = arr.size() ;
        // First we find the dip index ;
        for( int  i  = n-2 ; i >= 0 ; i-- ) {
            if( arr[i+1] > arr[i]) {
                dip_index = i ;
                break ;
            }
        }
        if(dip_index == -1 ) {
            reverse(arr.begin() , arr.end()) ;
            return  ; 
        } 

        for(int i = n-1  ; i > dip_index ; i--){
            if(arr[i] > arr[dip_index]) {
                swap(arr[i] , arr[dip_index]) ;
                break ;
            }
        }
        reverse(arr.begin()+dip_index+1, arr.end()) ;
        return ;
    }
}; 