//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void find_permutation(string S, int l, int r, vector<string>& ans) {
        if(l==r) {
            ans.push_back(S);
        } else {
            set<char> s;
            for(int i = l; i <= r; i++) {
                if(s.find(S[i])!=s.end()) continue;
                s.insert(S[i]);
                swap(S[l], S[i]);
                find_permutation(S, l+1, r, ans);
                swap(S[l], S[i]); // backtrack
            }
        }
    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		 vector<string> ans;
        find_permutation(S, 0, S.size()-1, ans);
        sort(ans.begin(),ans.end());
        return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends