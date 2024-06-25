//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> duplicates(vector<long long> arr) {
        
        // code here
        int n=arr.size();
        vector<int> ans;
        for(int i = 0; i < n ;i++)
        {
            arr[arr[i]%n]+=n;
        }
        for(int j = 0; j < n;j++)
        {
            if(arr[j]/n > 1)
            {
                ans.push_back(j);
            }
        }
        if(ans.size()==0)
        {
            ans.push_back(-1);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        vector<int> ans = obj.duplicates(arr);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends