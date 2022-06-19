#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int t;
    cin>> t;
    string s;
    while(t--){
        int a, ans = 0, n;
        s.clear();
        while(cin >> a && a != -1)
           s+= (a + '0'); 
        // cout<< s<<"\n";
        sort(all(s));
        cin >> n;
        do{ 
            // cout<< s<<"\n";
            int val = stoi(s);
            // cout<< val <<"\n";
            if (val % n == 0) ans++;
        }while(next_permutation(all(s)));
        cout<< ans<<"\n";
    }


    return 0;
}