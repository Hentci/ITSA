#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
#define sz(x) ((int)x.size())
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
const int mxN = 15, mxT = 1705;
int dp[mxT];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    vector <int> st(mxN), end(mxN), v(mxN), ans(mxT);
    vector <string> act(mxN);
    int n;
    cin >> n;
    string s;
    for(int i = 0, l, r, vv;i < n;i++){
        cin >> s >> l >> r >> vv;
        act[i] = s, st[i] = l, end[i] = r, v[i] = vv;
    }


    int mx = 0, endTime;
    // i -> end, j -> start
    for(int i = 0;i < mxT;i++){
        if(dp[i] <= dp[i - 1] && i){
            dp[i] = dp[i - 1];
            ans[i] = -1;
        }
        for(int j = 0;j < n;j++){
            if(st[j] == i){ 
                if(dp[end[j]] <= dp[i] + v[j]){
                    dp[end[j]] = dp[i] + v[j];
                    ans[end[j]] = j;
                }
            }
        }
        if(dp[i] > mx){
            mx = dp[i];
            endTime = i;
        }
    }

    // use stack to backtrack
    stack <int> stk;
    for(int i = endTime; i ;){
        if(ans[i] == -1) --i;
        else{
            stk.push(ans[i]);
            i = st[ans[i]];
        }
    }

    while(!stk.empty()){
        cout << act[stk.top()] << " ";
        stk.pop();
    } 

    cout << mx << "\n";
    

    return 0;
}