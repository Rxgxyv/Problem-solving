//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int i=0;
        while(i<N)
        {
            if(arr[i]<=0) i++;
            else{
                if(arr[i]<=N && arr[i]<=P){
                    if(arr[arr[i]-1]>0){
                        int temp=arr[i]-1;
                        swap(arr[i],arr[arr[i]-1]);
                        arr[temp]=-1;
                    }
                    else{
                        arr[arr[i]-1]-=1;
                        arr[i]=0;
                    }
                }
                else{
                    arr[i]=0;
                }
            }
        }
        for(int i =0; i < N;i++) arr[i]*=-1;
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends