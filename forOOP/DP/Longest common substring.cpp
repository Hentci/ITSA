#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
const int maxn=205;
string s1, s2;
int dp[maxn][maxn];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    // freopen("input.txt","r",stdin);
    int l1, l2;
    int t = 1;
    while (t--) {
        cin>> s1>> s2;
        l1 = (int)s1.length();
        l2 = (int)s2.length();
        memset(dp, 0, sizeof(dp));
        for (int i=1; i<=l1; i++) {
            for (int j=1; j<=l2; j++) {
                if (s1[i-1] == s2[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        cout << dp[l1][l2] << endl;
    }


    return 0;
}