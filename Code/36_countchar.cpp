/*
Count the characters
Difficulty: BasicAccuracy: 27.88%Submissions: 26K+Points: 1
Given a string S. Count the characters that have ‘N’ number of occurrences. If a character appears consecutively it is counted as 1 occurrence.

Example 1:

Input:
S = "abc", N = 1
Output: 3
Explanation: 'a', 'b' and 'c' all have 
1 occurrence.

â€‹Example 2:

Input: 
S = "geeksforgeeks", N = 2
Output: 4
Explanation: 'g', 'e', 'k' and 's' have
2 occurrences.*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
            //code here.
            int n=S.length();
            if(n==0) return 0;
           unordered_map<char,int> charcount;
           char lastchar=S[0];
           charcount[S[0]]=1;
           for(int i = 0; i < n;i++){
               if(S[i]!=lastchar){
                   charcount[S[i]]++;
                   lastchar=S[i];
               }
           }
           int res=0;
           for(auto &pair:charcount){
               if(pair.second==N){
                   res++;
               }
           }
           return res;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends