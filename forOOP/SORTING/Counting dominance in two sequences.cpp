#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
const int mxn = 5e4 + 5;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        vector <int> A(n),B(n);
        for(auto &ele: A) cin>> ele;
        for(auto &ele: B) cin>> ele;
        sort(all(A)),sort(all(B));
        ll ans = 0;
        for(int i = 0;i< n;i++){
            int p = upper_bound(all(A),B[i]) - A.begin();
            ans += n - p;
        }
        cout<< ans <<"\n";
    }


    return 0;
}