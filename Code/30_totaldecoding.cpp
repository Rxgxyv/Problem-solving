//{ Driver Code Starts
/*
Example 1:

Input: str = "123"
Output: 3
Explanation: "123" can be decoded as "ABC"(123),
"LC"(12 3) and "AW"(1 23).
Example 2:

Input: str = "90"
Output: 0
Explanation: "90" cannot be decoded as it's an invalid string and we cannot decode '0'.
 

Your Task:
You don't need to read or print anything. Your task is to complete the function CountWays() which takes the string as str as input parameter and returns the total number of ways the string can be decoded modulo 109 + 7.
 

Expected Time Complexity: O(n)
Expected Space Complexity: O(n) where n  = |str|*/
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    const int MOD = 1e9 + 7;
	public:
		int CountWays(string str){
		    // Code here
		    int n = str.size();
            vector<int> dp(n + 1, 0);
            dp[0] = 1;
            dp[1] = (str[0]!= '0');
        
            for (int i = 2; i <= n; i++) {
                if (str[i - 1]!= '0')
                    dp[i] = (dp[i] + dp[i - 1]) % MOD;
                if (str[i - 2]!= '0' && (str[i - 2] - '0') * 10 + (str[i - 1] - '0') <= 26)
                    dp[i] = (dp[i] + dp[i - 2]) % MOD;
            }

    return dp[n];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends