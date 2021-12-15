#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    ll n,sum = 0;
    cin >> n;    
    for(int i = 0,a;i< n - 1;i++)
        cin >> a, sum += a;
    cout<< (n + 1) * n / 2 - sum <<"\n";

    return 0;
}