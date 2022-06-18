#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
#define sz(x) ((int)x.size())
template <class T, class S> inline bool chmin(T &a, const S &b) { return (a > b ? a = b, 1 : 0); }
template <class T, class S> inline bool chmax(T &a, const S &b) { return (a < b ? a = b, 1 : 0); }
ll pow6[25]; // store power of 6
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    ll n, x;
    cin >> n >> x;
    vector <vector <ll>> dp(20 + 5, vector <ll> (200 + 5, 0)); 
    // init
    dp[0][0] = 1;
    for(int i = 1;i <= 20;i++){
        for(int j = 1;j <= 6;j++){
            for(int k = (i - 1) + j;k <= 6 * (i - 1) + j;k++)
                dp[i][k] += dp[i - 1][k - j]; // 第i顆骰子總和k，為第i-1顆骰子總和-點數(1-6)而來。
        }
    }

    pow6[0] = 1;
    for(int i = 1;i <= 20;i++)
        pow6[i] = pow6[i - 1] * 6;

    ll d = pow6[n], u = 0;

    for(int k = x;k <= 6 * n;k++) // 題目問至少x
        u += dp[n][k];

    ll gcd = __gcd(d, u);
    if(u) cout << u / gcd << " / " << d / gcd << "\n";
    else cout << 0 << "\n";

    return 0;
}