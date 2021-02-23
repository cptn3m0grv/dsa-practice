// A time is a string in the format "HH:MM AM" or "HH:MM PM" (without quotes), where HH and MM are always two-digit numbers. A day starts at 12:00 AM and ends at 11:59 PM. You may refer here for understanding the 12-hour clock format.

// Chef has scheduled a meeting with his friends at a time P. He has N friends (numbered 1 through N); for each valid i, the i-th friend is available from a time Li to a time Ri (both inclusive). For each friend, can you help Chef find out if this friend will be able to attend the meeting? More formally, check if Li≤P≤Ri for each valid i.

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first line of each test case contains a single time P.
// The second line contains a single integer N.
// N lines follow. For each valid i, the i-th of these lines contains two space-separated times Li and Ri.
// Output
// For each test case, print a single line containing one string with length N. For each valid i, the i-th character of this string should be '1' if i-th friend will be able to attend the meeting or '0' otherwise.

// Constraints
// 1≤T≤500
// 1≤N≤500
// each time is valid in the 12-hour clock format
// for each valid i, the time Ri is greater or equal to Li
// Subtasks
// Subtask #1 (100 points): original constraints

// Example Input
// 2
// 12:01 AM
// 4
// 12:00 AM 11:42 PM
// 12:01 AM 11:59 AM
// 12:30 AM 12:00 PM
// 11:59 AM 11:59 PM
// 04:12 PM
// 5
// 12:00 AM 11:59 PM
// 01:00 PM 04:12 PM
// 04:12 PM 04:12 PM
// 04:12 AM 04:12 AM
// 12:00 PM 11:59 PM
// Example Output
// 1100
// 11101
// Explanation
// Example case 1:

// Friend 1: 12:01 AM lies between 12:00 AM and 11:42 PM (that is, between 00:00 and 23:42 in the 24-hour clock format), so this friend will be able to attend the meeting.
// Friend 2: 12:01 AM lies between 12:01 AM and 11:59 AM (between 00:01 and 11:59 in the 24-hour clock format).
// Friend 3: 12:01 AM does not lie between 12:30 AM and 12:30 PM (between 00:30 and 12:30 in the 24-hour clock format), so this friend will not be able to attend the meeting.
// Friend 4: 12:01 AM does not lie between 11:59 AM and 11:59 PM (between 11:59 and 23:59 in the 24-hour clock format).
// Example case 2: For friend 3, 04:12 PM lies between 04:12 PM and 04:12 PM (inclusive) and hence this friend will be able to attend the meeting.

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long


void solve(){
        string P, z;
        cin>>P>>z;
        int N;
        cin>>N;
        int mH = 0;
        int mM = 0;
        mH = mH + 10*(P[0]-48);
        mH = mH + (P[1]-48);
        mM = mM + 10*(P[3]-48);
        mM = mM + (P[4]-48);
        if(mH!=12&&z[0]=='P'){
            mH+=12;
        }
        else if(mH==12&&z[0]=='A'){
            mH=0;
        }
        string L, Lz, R, Rz;
        while(N--){
            int ans =0;
            cin>>L>>Lz>>R>>Rz;
            
            int lH=0;
            int lM=0;
            lH = lH + 10*(L[0]-48);
            lH = lH + (L[1]-48);
            lM = lM + 10*(L[3]-48);
            lM = lM + (L[4]-48);
            if(lH!=12&&Lz[0]=='P'){
                lH+=12;
            }
            else if(lH==12&&Lz[0]=='A'){
                lH=0;
            }
            
            int rH=0;
            int rM=0;
            rH = rH + 10*(R[0]-48);
            rH = rH + (R[1]-48);
            rM = rM + 10*(R[3]-48);
            rM = rM + (R[4]-48);
            if(rH!=12&&Rz[0]=='P'){
                rH+=12;
            }
            else if(rH==12&&Rz[0]=='A'){
                rH=0;
            }
            
            if(lH<mH&&rH>mH){
                ans=1;
            }else if(lH==mH&&rH>mH){
                if(lM<=mM){
                    ans=1;
                }
            }else if(lH<mH&&rH==mH){
                if(mM<=rM){
                    ans=1;
                }
            }else if(lH==mH&&rH==mH){
                if(lM<=mM&&rM>=mM){
                    ans=1;
                }
            }
            cout<<ans;
        }
        cout << "\n";
}

int main(){
    fastio;
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}