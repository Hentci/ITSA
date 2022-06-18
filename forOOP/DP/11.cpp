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
    string s, arr[2];
    cin >> s;
    int a, b, n = 0;
    stringstream ss(s);
    while(getline(ss, arr[n], ',')) n++;
    a = stoi(arr[0]);
    b = stoi(arr[1]);

    int dp[55][55] = {};

    // 0 0 -> 1
    // 1 0 -> 1, 2 0 -> 1, 1 1 -> 1, 2 1 -> 2, 1 2 -> 0

    function<int(int, int, int)> dfs = [&](int a, int b, int sum){
        if(a == 0 || b == 0) return 1;
        if(dp[a][b]) return dp[a][b];

        int res = 0;
        res += dfs(a - 1, b, sum + 50);
        if(sum > 0) res += dfs(a, b - 1, sum - 50);

        return dp[a][b] = res;
    };

    cout << dfs(a, b, 0) << "\n";
    

    return 0;
}