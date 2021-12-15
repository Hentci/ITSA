#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
ll sumofFactors(ll n){
    ll res = 1;
    for(ll i = 2;i<= sqrt(n);i++){
        ll curr_sum = 1,curr_term = 1;
        while(n % i == 0){
            n/= i;
            curr_term *= i;
            curr_sum += curr_term;
        }
        res *= curr_sum;
    }
    // if n is prime
    if(n >= 2)
        res *= (1 + n);
    return res;
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int t;
    cin>> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = sumofFactors(n) - n;
        cout<< (ans == n ? "perfect" : "nonperfect")<<"\n";
    }


    return 0;
}