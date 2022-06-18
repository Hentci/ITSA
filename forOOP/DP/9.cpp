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
    vector <int> c(4);
    c[0] = 1, c[1] = 5, c[2] = 10, c[3] = 50;

    string s, in[3];
    cin >> s;
    int x, n = 0, v;
    stringstream ss(s);
    while(getline(ss, in[n], ',')) n++;
    v = (in[1] == "1") ? 17 : 25;

    x = stoi(in[0]) - v * stoi(in[2]);
    
    reverse(all(c));
    map <int, int> mp;
    for(auto ele: c){
        int cnt = 0;
        if(x / ele){
            cnt += x / ele;
            x %= ele;
        }
        if(cnt){
            mp[ele] = cnt;
        }
    }

    for(auto ele: mp){
        cout << "Coin " << ele.first << ":" << ele.second;
        if(ele.first != mp.rbegin() -> first) cout << ",";
    }
    cout << "\n";

    // vector <vector <bool>> ok(x + 5, vector <bool>(10, false));
    // vector <int> dp(x + 5, 0);

    // for(int i = 1;i <= x;i++){
    //     dp[i] = (int)1e9;
    //     for(auto ele: c)
    //         if(i - ele >= 0){
    //             if(dp[i] > dp[i - ele] + 1){
    //                 dp[i] = dp[i - ele] + 1;
    //                 ok[i][ele] = true;
    //             }
    //         }
    // }

    // int tmpX = x, tmpN = 4;
    // map <int, int> mp;
    // while(tmpX > 0){
    //     int i;
    //     for(i = tmpN;~i;i--){
    //         if(ok[tmpX][i]){
    //             tmpN = i;
    //             break;
    //         }
    //     }
    //     if(i < 0) break;
    //     mp[c[tmpN]]++;
    //     tmpX -= c[tmpN];
    // }

    // for(auto ele: c){
    //     if(mp[ele])
    //         cout << "Coin " << ele << ":" << mp[ele] <<",";
    // }

    // cout << "\n";

    return 0;
}