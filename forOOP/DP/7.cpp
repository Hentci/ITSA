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
    vector <int> arr(n + 5);
    int dp[n + 5][n + 5], idx[105][105];

    for(int i = 0;i < n;i++)
        cin >> arr[i] >> arr[i + 1];
    
    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= n;j++){
            dp[i][j] = 0x3f3f3f3f;
        }
        dp[i][i + 1] = 0;
    }

    for(int i = 1;i <= n;i++){
        for(int j = 0;i + j <= n;j++){
            for(int k = j + 1;k <= i + j;k++){
                if(dp[j][i + j] > dp[j][k] + dp[k][i + j] + arr[j] * arr[k] * arr[i + j])
                    dp[j][i + j] = dp[j][k] + dp[k][i + j] + arr[j] * arr[k] * arr[i + j], idx[j][i + j] = k;
            }
        }
    }

    // backtrack
    function <void(int, int)> dfs = [&](int l, int r){
        if(l + 1 == r){
            cout << "M" << l + 1;
            return;
        }
        cout << '(';
        dfs(l, idx[l][r]);
        dfs(idx[l][r], r);
        cout << ')';
    };

    dfs(0, n);
    cout << "\n" << dp[0][n] << "\n";

    return 0;
}