//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
int value( char r){
    if(r=='I') return 1;
    if(r=='V') return 5;
    if(r=='X') return 10;
    if(r=='L') return 50;
    if(r=='C') return 100;
    if(r=='D') return 500;
    if(r=='M') return 1000;
}

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int res=0;
       for(int i =0 ; i < str.length();i++){
           int s1=value(str[i]);
           if(i+1 < str.length()){
               int s2=value(str[i+1]);
               if(s1>=s2){
                   res+=s1;
               }
               else{
                   res=res+s2-s1;
                   i++;
               }
           }else{
               res=res+s1;
           }
       }
       return res;
       
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends