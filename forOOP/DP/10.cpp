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
    map <string, int> mp;
    vector <string> arr;
    string s;
    for(int i = 0;i < n;i++){
        cin >> s;
        mp[s] = 0;
        arr.push_back(s);
    }

    while(cin >> s && s != "0"){
        int lend, num, d;
        cin >> lend >> num;
        mp[s] -= lend;
        d = lend / num;
        string p;
        for(int i = 0;i < num;i++){
            cin >> p;
            mp[p] += d;
        }
    }
    for(auto ele: arr){
        cout << ele << " " << mp[ele] << "\n";
    }

    return 0;
}