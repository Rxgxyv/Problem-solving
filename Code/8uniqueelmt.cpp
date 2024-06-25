//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        
         
         
    sort(a, a+n);
    if (n == 0 || n == 1) return n; // Handle edge cases
    // Two pointers: slow (j) and fast (i)
    int j = 0;
    for (int i = 1; i < n; i++) {
      if (a[i] != a[j]) { // If elements are different
        j++; // Move slow pointer (j)
        a[j] = a[i]; // Copy unique element to next position
      }
    }
    // Return the number of unique elements (j + 1)
    return j + 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends