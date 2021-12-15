#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
const int mxn = 1005;
int dp[mxn][2];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    // abs(curr - pre)
    int n;
    while(cin>> n && n){
        vector <ar<int,2>> arr(n);
        for(auto &[a,b]: arr)
            cin>> a>> b;
        memset(dp, 0, sizeof dp);
        dp[0][0] = dp[0][1] = 1000;
        // int ans = 0;
        for(int i = 1;i<= n;i++){
            
        }
        for(int i = 0;i<= n;i++)
            cout<< dp[i][0]<<" ";
        cout<<"\n";
        for(int i = 0;i<= n;i++)
            cout<< dp[i][1]<<" ";
        cout<<"\n";

    }


    return 0;
}