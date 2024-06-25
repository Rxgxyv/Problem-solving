/*Given an odd length word your task is to complete the function printPattern that takes a string s as its argument and prints it from the middle of the word such that it follows the following pattern.
 

Input: PROGRAM 
Output:
G$ GR$ GRA$ GRAM$ 
GRAMP$ GRAMPR$ GRAMPRO$

Input: RAT
Output:
A$ AT$ ATR$

NOTE: 
Corresponding to each test case in a new 
line print the pattern in a  single 
line where each row of the pattern 
is separated by a "$" instead 
of a new line.*/

//{ Driver Code Starts
#include <iostream>
using namespace std;

void printPattern(string s);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	printPattern(s);
	cout<<endl;
	
}
	
	return 0;
}
// } Driver Code Ends


/*method prints the given pattern in a single line */
void printPattern(string s)
{
    int n = s.size()/2;
    for(int i=0;i<s.size();i++){
        for(int k=n;k<=(n+i);k++){
            cout<<s[k%s.size()];
        }
        cout<<"$ ";
    }
}
