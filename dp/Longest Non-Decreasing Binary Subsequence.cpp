#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
const int mxn = 5000005;
int pre[mxn],post[mxn];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int t,n;
    cin>> t;
    auto solve = [&](string s)-> int{
        for (int i = 0; i < n; i++) {
            // Find the prefix sum
            if (i != 0) 
                pre[i] += pre[i - 1];

            // If the current element
            // is '1', update the pre[i]
                if (s[i] == '0') 
                    pre[i] += 1;
        }

        int ans = 0;
        // Store the number of '0's over
        // the range [i, N - 1]
        for (int i = n - 1; i >= 0; i--) {
            // Find the suffix sum
            if (i != n - 1)
                post[i] += post[i + 1];
    
            // If the current element
            // is '0', update post[i]
            if (s[i] == '1')
                post[i] += 1;
            chmax(ans, pre[i] + post[i]);
        }
 
    // // Stores the maximum length
    // int ans = 0;
 
    // // Find the maximum value of
    // // pre[i] + post[i]
    // for (int i = 0; i < n; i++) 
    //     ans = max(ans, pre[i] + post[i]);

        return ans;
    };
    while(t--){
        string s;
        cin>> s;
        n = s.size();
        memset(pre,0,sizeof pre);
        memset(post, 0, sizeof post);
        cout<< solve(s)<<"\n";
    }


    return 0;
}