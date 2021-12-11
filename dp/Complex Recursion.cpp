#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
ll dp[505][505][505];
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    
    for(int i= 0;i<= 500;i++){
        for(int j= 0;j<= 500;j++){
            for(int k= 0;k<= 500;k++){
                if(i == 0 || j == 0 || k == 0) dp[i][j][k] = 1;
                else 
                    dp[i][j][k] = (dp[i - 1][j - 1][k - 1]) / 3 + dp[i/2][j - 1][k/ 2] + dp[i/2][min((ll)j-1,dp[i/4][j/4][k/5] / 2)][k-1];
            }
        }
    }
    int x,y,z;
    cin>> x>> y>> z;
    cout<< dp[x][y][z]<<"\n";

    return 0;
}