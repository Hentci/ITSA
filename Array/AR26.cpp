#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n,m;
    cin >> n>> m;
    vector <vector <int>> arr(n,vector<int> (m));
    int cnta = 0,cntb = 0;
    for(int i = 0;i < n;i++){
        for(auto &ele: arr[i]){
            cin >> ele;
            if (ele) cnta++;
            else cntb++;
        }
    }
    cout<< (cntb > cnta ? 0 : cntb < cnta ? 1 : 2)<<"\n";

    return 0;
}