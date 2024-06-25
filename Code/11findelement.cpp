//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
   
    int ml=INT_MIN;
    int mr=INT_MAX;
    int max_l[n];
    int min_r[n];
    
    for(int i =0 ; i < n;i++){
        ml=max(ml,arr[i]);
        max_l[i]=ml;
        
        mr=min(mr,arr[n-i-1]);
        min_r[n-i-1]=mr;
    }
    for(int i = 1; i < n - 1; i++ ){
        if(max_l[i]==min_r[i]){
            return max_l[i];
        }
    }
    return -1;
    
    
    
}