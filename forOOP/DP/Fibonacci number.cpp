#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
ll dp[50];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int t;
    cin>> t;
    dp[0] = 1,dp[1] = 1;
    for(int i= 2;i< 46;i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    int a;
    while(t--){
        cin>> a;
        cout<< dp[a - 1]<<"\n";
    }


    return 0;
}