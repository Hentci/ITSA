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
    int x, n;
    cin >> x >> n;
    // inifinity knapsack
    vector <int> w(n + 5), c(n + 5), dp(x + 5, 0);
    vector <string> tags(n + 5);
    vector <vector <bool>> ok(n + 5, vector <bool> (x + 5, 0));

    for(int i = 1;i <= n;i++)
        cin >> w[i] >> c[i] >> tags[i];

    for(int i = 1;i <= n ;i++){
        for(int j = w[i];j <= x;j++){
            if(dp[j] < dp[j - w[i]] + c[i]){
                dp[j] = dp[j - w[i]] + c[i];
                ok[i][j] = true;
            }
        }
    }

    // backtrack
    int tmpW = x, tmpN = n;
    map <string, int> mp;
    while(tmpW > 0){
        int i;
        for(i = tmpN;i >= 0;i--){
            if(ok[i][tmpW]){
                tmpN = i;
                break;
            }
        }
        if(i < 0) break;
        mp[tags[tmpN]]++;
        tmpW -= w[tmpN];
    }

    cout << "Total: " << dp[x] << ", including";
    // for(auto ele: mp)
    //     cout << " " << ele.second << " " << ele.first;
    for(int i = 1;i <= n;i++){
        if(mp[tags[i]]) cout << " " << mp[tags[i]] << " " << tags[i];
    }

    cout << "\n";

    return 0;
}