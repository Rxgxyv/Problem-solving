/*
Example 1:
Input: N = 7, arr[] = {7, 1, 2, 3, 4, 5, 6}
Output: 7 1 6 2 5 3 4
Explanation:The first element is first 
maximum and second element is first 
minimum and so on.
Example 2:

Input: N = 8, arr[] = {1, 6, 9, 4, 3,7, 8, 2}
Output: 9 1 8 2 7 3 6 4
*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	     bool toggle = true;
        vector<int> result;
        int l=0,r =N-1;
        sort(arr,arr+N);
        while(l<=r){
            if(toggle){
                result.push_back(arr[r--]);
                toggle=false;
            }
            else{
                result.push_back(arr[l++]);
                toggle=true;
            }
        }
        return result;
	}

};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends