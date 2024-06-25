//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin(string S) {
        // code here
        int l,r;
        string longest="";
        for (int i = 0; i < S.size(); i++) {
    // Check for odd length palindrome
            l = i;
            r = i;
            while (l >= 0 && r < S.size() && S[l] == S[r]) {
                if (r - l + 1 > longest.size()) {
                    longest = S.substr(l, r - l + 1);
                }
                l--;
                r++;
            }
        }
         // Check for even length palindrome
        for(int i =0; i < S.size();i++){
            l=i;
            r=i+1;
            while(l>=0 and r<S.size() and S[l]==S[r]){
                if(r-l+1 > longest.size()){
                    longest=S.substr(l,r-l+1);
                }
                l--;
                r++;
            }
        }
        return (longest=="")?S.substr(0,1):longest;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends