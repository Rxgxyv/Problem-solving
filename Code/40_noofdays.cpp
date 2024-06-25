/* Example 1:

Input:
d1 = 10, m1 = 2, y1 = 2014
d2 = 10, m2 = 3, y2 = 2015
Output:
393
Explanation:
By counting manually, we find out there
are 393 days between the two dates.
Example 2:

Input:
d1 = 10, m1 = 2, y1 = 2001
d2 = 10, m2 = 2, y2 = 2002
Output:
365
Explanation:
By counting manually, we find out there
are 365 days between the two dates.*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool isLeapYear(int year) {
    if(year%400==0 || (year%4==0 && year%100!=0)) return true;
    else return false;
  }
  int countDaysInMonth(int month, int year) {
    switch (month) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 31;
    }
  }
    int dateToDays(int day, int month, int year) {
        int days = day;
        for (int m = 1; m < month; ++m) {
            days += countDaysInMonth(m, year);
        }
        for (int y = 1; y < year; ++y) {
            days += isLeapYear(y) ? 366 : 365;
        }
        return days;
    }
    int noOfDays(int d1, int m1, int y1, int d2, int m2, int y2) {
        // code here
        int days1 = dateToDays(d1, m1, y1);
        int days2 = dateToDays(d2, m2, y2);
        return abs(days2 - days1);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d1,d2,m1,m2,y1,y2;
        
        cin>>d1>>m1>>y1;
        cin>>d2>>m2>>y2;

        Solution ob;
        cout << ob.noOfDays(d1,m1,y1,d2,m2,y2) << endl;
    }
    return 0;
}
// } Driver Code Ends