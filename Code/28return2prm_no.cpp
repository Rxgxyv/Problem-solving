/*
Given an even number n (greater than 2), return two prime numbers whose sum will be equal to the given number. There are several combinations possible. Print only the pair whose minimum value is the smallest among all the minimum values of pairs and print the minimum element first.

NOTE: A solution will always exist, read Goldbach's conjecture. 

Example 1:

Input: n = 74
Output: 3 71
Explaination: There are several possibilities, 
like 37, 37. But the minimum value of the solution pair 
is 3 which is smallest among all possible 
minimum values of all the pairs.
Example 2:

Input: n = 4
Output: 2 2
Explaination: This is the only possible 
partitioning of 4.
Your Task:
You do not need to read input or print anything. Your task is to complete the function primeDivision() which takes n as input parameter and returns the partition satisfying the condition.

Expected Time Complexity: O(n*log(logn))
Expected Auxiliary Space: O(n)

Constraints:
4 ≤ n ≤ 105  
*/
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int isPrime(int num){
     if(num == 1 or num == 0) return 0;
     for(int i =2;i < num;i++){
        if(num%i==0) return 0;
     }
     return 1;
    }
    vector<int> primeDivision(int n) {
        // code here
        vector<int> prime;
        vector<int> res;
        int k;
         for(int i = 2; i < n;i++){
            if(isPrime(i)){
              prime.push_back(i);
            }
         }
         int p[2];
         bool found=false;
         for(int i = 0; i < prime.size();i++){
            k=n-prime[i];
            if(isPrime(k) and k >= prime[i]){
                p[0]=prime[i];
                p[1]=k;
                found=true;
                if(found){
                    res.push_back(p[0]);
                    res.push_back(p[1]);
                    return res;
                }else{
                    res.push_back(0);
                    return res;
                }
                break;
            }  
         }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends