#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    set<int> s;
    for(int i= 1;i<= 5;i++)
        s.insert(i);
    for(int i= 1;i<= 5;i+= 2){
        s.erase(i);
    }
    for(auto ele: s)
        cout<< ele<<" ";
    cout<<"\n";

    return 0;
}