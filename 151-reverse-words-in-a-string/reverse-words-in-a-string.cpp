class Solution {
public:
    string reverseWords(string s) {
        string str = "" ;
        // string s = "" ;
        stack <string> st ;  
        string sets = "" ;
        int j = 0 ;
        int n = s.size() ;
 

        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i+1]==' ' && s[i] == ' '){
                continue ;
            }
            if(s[i] != ' ') {
                sets += s[i] ;
            }
            if(s[i]==' ' ||  i == n-1 ){
                st.push(sets) ;
                sets = "" ;
            }
            
        }
        // cout<<st.top()<<endl ;
        while(!st.empty()) {
            if(st.size()>1){
            str += st.top()+" " ;
            st.pop() ;
            }
            else{
                str += st.top() ;
                st.pop() ;
            }
        }
        int m = str.size() ;
        if(str[m-1]==' '){
        str.pop_back() ;
    }
        return str ;
    }
};