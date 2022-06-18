#include <bits/stdc++.h>
using namespace std;
const int mxX = 200005;
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        bitset <mxX> dp;
        dp.set(0);
        vector <int> arr(n), items(m);
        for(auto &ele: arr) cin >> ele;
        for(auto &ele: items) cin >> ele;

        for(auto ele: arr)
            dp |= (dp << ele);
        
        int ans = 0;
        for(auto ele: items)
            if(dp[ele]) ans++;
        
        cout << ans << "\n";
    }



    return 0;
}