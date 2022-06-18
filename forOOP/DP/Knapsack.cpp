#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int dp[10005];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n,x;
    cin>> n;
    vector <int> w,v;
    for(int i= 0,a,b;i< n;i++){
        cin>> a>> b;
        w.push_back(a),v.push_back(b);
    }
    cin>> x;
    for(int i = 0;i< n;i++){
        for(int j = x;j>= w[i];j--)
            chmax(dp[j],dp[j - w[i]]+ v[i]);
    }
    cout<< dp[x]<<"\n";

    return 0;
}