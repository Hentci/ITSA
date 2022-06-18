#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
#define sz(x) ((int)x.size())
template <class T, class S> inline bool chmin(T &a, const S &b) { return (a > b ? a = b, 1 : 0); }
template <class T, class S> inline bool chmax(T &a, const S &b) { return (a < b ? a = b, 1 : 0); }
const int mxN = 15005;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    vector <int> c(4);
    c[0] = 1, c[1] = 5, c[2] = 10, c[3] = 50;

    int x;
    cin >> x;
    ll dp[mxN] = {};
    dp[0] = 1;
    for(auto ele: c){
        for(int i = 1;i <= x;i++){
            if(i - ele >= 0)
                dp[i] = dp[i] + dp[i - ele];
        }
    }

    cout << dp[x] << "\n";

    return 0;
}