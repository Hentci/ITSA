#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
const int mxsum = 5e5 + 10;
int dp[mxsum];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n;
    while(cin>> n && n){
        vector <int> arr(n);
        memset(dp, 0, sizeof dp);
        dp[0] = 1;
        for(auto &ele: arr)
            cin>> ele;
        for(auto ele: arr){
            for(int i = mxsum;i; i--)
                if(i - ele>= 0)
                    dp[i] |= dp[i - ele];
        }
        int ans = 0;
        for(int i  = 1;i<= mxsum;i++)
            if(dp[i]) ans++;

        cout<< ans + 1<<"\n";
    }


    return 0;
}