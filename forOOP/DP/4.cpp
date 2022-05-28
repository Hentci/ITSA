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
        int n;
        cin >> n;
        vector <vector <int>> G(n + 5, vector <int> (n + 5));
        vector <bool> ok(n + 5);
        vector <int> dp(n + 5, 0x3f3f3f3f);

        for(int i = 0;i < n;i++){
            for(int j = 0, a;j < n;j++){
                cin >> a;
                G[i][j] = a;
            }
        }

        dp[0] = 0;
        int ans = 0;
        for(int i = 0;i < n;i++){
            int mn = 0x3f3f3f3f, tmp;
            for(int j = 0;j < n;j++){
                if(dp[j] < mn && !ok[j]){
                    mn = dp[j];
                    tmp = j;
                }
            }
            ans += mn, ok[tmp] = true;
            for(int j = 0;j < n;j++)
                if(G[tmp][j])
                    chmin(dp[j], G[tmp][j]);
        }

        cout << ans << "\n";
    }


    return 0;
}