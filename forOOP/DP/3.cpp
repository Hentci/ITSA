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
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        // 1 2 3 4 5 
        // 1 1 1 2 3 
        ll dp[105][5] = {};
        dp[1][0] = x; // 第一天是0th的有x隻
        for(int i = 2;i <= y;i++){
            dp[i][0] = dp[i - 1][2] + dp[i - 1][3];
            dp[i][1] = dp[i - 1][0];
            dp[i][2] = dp[i - 1][1];
            dp[i][3] = dp[i - 1][2];
            dp[i][4] = dp[i - 1][3];
        }

        cout << accumulate(dp[y], dp[y] + 5, 0LL) << "\n";
    }    


    return 0;
}