#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
ll dp[100];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int t;
    cin>> t;
    dp[0] = 0;
    dp[1] = 1;
    int mul = 1;
    for(int i= 2;i< 100;i+= 2){
        dp[i] = dp[i - 1] + (ll)pow(2,mul);
        dp[i + 1] = dp[i] + (ll)pow(2,mul);
        mul++;
    }
    // for(int i= 1;i< 10;i++)
    //     cout<< dp[i]<<" ";
    // cout<<"\n";
    while(t--){
        int a;
        cin>> a;
        cout<< dp[a]<<"\n";
    }

    return 0;
}

// 1 3 5 9 13 21