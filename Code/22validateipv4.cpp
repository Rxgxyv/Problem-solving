//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int n = s.size();
            string temp="";
            int count=0;
            if(n < 7 ) return false;
            vector<string> ip;
            for(int i = 0 ; i < n ; i++){
                if(s[i]=='.'){
                    if(temp.empty()||temp.size() > 3|| (temp.size()>1 && temp[0]=='0')) return 0;
                    int num=stoi(temp);
                    if(num < 0 || num > 255) return 0;
                    ip.push_back(temp);
                    temp="";
                }else{
                    if(s[i] < '0' || s[i] > '9') return 0;
                    temp+=s[i];
                }
            }
            if(temp.empty()||temp.size()>3 || (temp.size()>1 && temp[0]=='0')) return 0;
            int num=stoi(temp);
            if(num < 0 || num > 255) return 0;
            ip.push_back(temp);
            if(ip.size() != 4) return 0;
            return 1;
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends