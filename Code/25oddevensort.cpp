//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        int temp[n];
        int odd[n];
        for(int i = 0 ; i < n; i++){
            if(arr[i]%2==0){
                temp[i]=arr[i];
            }
            else{
                odd[i]=arr[i];
            }
        }
        int tn=sizeof(temp)/sizeof(temp[0]);
        int on=sizeof(odd)/sizeof(odd[0]);
        sort(odd,odd+on,greater<int>());
        sort(temp,temp+tn);
        for(int  i = on ; i < n; i++){
            odd[i]=temp[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends