//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    vector<int> ans;
	    sort(arr,arr+N,greater<int>());
	    int f[N];
	    int l[N];
	    for(int i = 0; i < N/2;i++){
	        f[i]=arr[i];
	    }
	    for(int j=N/2;j<N;j++){
	        l[j]=arr[j];
	    }
	    int i=0;
	    int j=N/2;
	    while(i < N/2 and j < N){
	        ans.push_back(arr[i]);
	        ans.push_back(arr[j]);
	    }
	    return ans;
	}

};
	

//{ Driver Code Starts.

int main() 
{
   
    	int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(int i=ans.begin();i < ans.end();i++)
        	cout << i << " ";
	    cout << endl;
	     
    
    return 0;
}


// } Driver Code Ends