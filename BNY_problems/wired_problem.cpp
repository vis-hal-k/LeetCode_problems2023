#include<bits/stdc++.h>
using namespace std ;
int NoFLines(string str , int  n ) {
    int ans = 1 ;
     int c= 0 ;
     for(int i = 0 ; i < n ; i++ ) {
        if(str[i] == ' ' ) {
            c++ ;
        }
        if(str[i-1]==' ' && !(isalpha(str[i])) ){
            ans-- ;
        }
        if(c==2)  {
            ans ++ ;
            c = 0 ;
        }
        
     }
     return ans ;
}

int main() {
    string s ;
    getline(cin , s) ;
    int n = s.size() ;
    cout<<NoFLines(s, n) ;
    return  0 ;
    
}
