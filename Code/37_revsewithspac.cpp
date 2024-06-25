
/*Given a string, your task is to reverse the string keeping the spaces intact to their positions.

Example 1:

Input:
S = "Help others"
Output: sreh topleH
Explanation: The space is intact at index 4
while all other characters are reversed.
Example 2:

Input: 
S = "geeksforgeeks"
Output: skeegrofskeeg
Explanation: No space present, hence the
entire string is reversed.*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
  
        string reverseWithSpacesIntact (string s)
        {
            string temp="";
            for(char c:s){
                if(c!=' ') temp+=c;
            }
            reverse(temp.begin(),temp.end());
            //code here.
            string ans=s;
            int j=0;
            for(int i = 0;i<s.size();i++){
                if(s[i]!=' '){
                    ans[i]=temp[j];
                    j++;
                }
            }
            return ans;
        }
      

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout << ob.reverseWithSpacesIntact (s) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends