/*
Sum of primes
Difficulty: BasicAccuracy: 37.14%Submissions: 19K+Points: 1
Your task is to calculate sum  of primes present as digits of given number N.

Example 1:

Input: 333
Output: 9
Explaination: 3 is a prime number. It 
is present 3 times. So 3+3+3 = 9.
Example 2:

Input: 686
Output: 0
Explaination: Neither 6 nor 8 is a 
prime number.*/



//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool isPrime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        if(n%2==0) return false;
        for(int i = 3;i*i <= n;i+=2){
            if(n%i==0) return false;
        }
        return true;
    }
    int primeSum(int N){
        // code here
        int sum=0;
        while(N!=0)
        {
            int k=N%10;
            if(isPrime(k)) sum+=k;
            N=N/10;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends