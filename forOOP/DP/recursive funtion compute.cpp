#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
const int mxn = 95;
int dp[mxn];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 2;
    for(int i = 3;i< 91;i++)
        dp[i] = dp[i - 1] / 4 + dp[i - 2] / 2 + dp[i - 3];
    int n;
    cin>> n;
    cout<< dp[n]<<"\n";

    return 0;
}