//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int isPowerOfAnother(long long X, long long Y){
       if (Y == 1) {
        return 1;  // Any number to the power of 0 is 1
    }

    if (X == 1) {
        return 0;  // 1 to any power except 0 is 1, which is already handled above
    }

        long long power = X;
        while (power <= Y) {
            if (power == Y) {
                return 1;
            }
        power *= X;
        }

    return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int X, Y;
        cin >> X >> Y;
        Solution ob;
        cout << ob.isPowerOfAnother(X,Y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends