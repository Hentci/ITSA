#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int dp[1000];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 3;
    dp[6] = 4;
    dp[7] = 5;
    // 8 6 2,2 6,3 5,5 3,4,8
    // 9 7 2,2 7,3 6,6 3,4 5,5 4,9
    for(int i = 4;i< 999;i++)
        dp[i] = dp[i - 1] + 1;
    // for(auto ele: dp)
    //     cout<< ele<<" ";
    // cout<<"\n";
    int a;
    cin>> a;
    cout<< dp[a]<<"\n";

    return 0;
}