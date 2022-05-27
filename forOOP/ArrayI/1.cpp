#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
#define sz(x) ((int)x.size())
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    string s, tmp;
    getline(cin, s);
    stringstream ss(s);
    vector <string> arr;
    while(ss >> tmp)
        arr.push_back(tmp);

    reverse(all(arr));

    for(auto ele: arr) cout << ele << " ";

    cout << "\n";

    return 0;
}