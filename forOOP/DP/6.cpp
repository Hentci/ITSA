#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
#define sz(x) ((int)x.size())
template <class T, class S> inline bool chmin(T &a, const S &b) { return (a > b ? a = b, 1 : 0); }
template <class T, class S> inline bool chmax(T &a, const S &b) { return (a < b ? a = b, 1 : 0); }
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    ll dp[n + 5][2] = {};
    dp[0][1] = 1;
    // 0 -> male
    // 1 -> female
    for(int i = 1; i <= n;i++){
        dp[i][0] = dp[i - 1][1] + dp[i - 1][0];
        dp[i][1] = dp[i - 1][0] + 1;
    }

    cout << dp[n][0] << " " << dp[n][1] << "\n";
    

    return 0;
}