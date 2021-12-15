#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    string big = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    string small;
    for(auto ele: big)
        small += tolower(ele);
    string s;
    getline(cin,s);
    for(auto &ele : s){
        if(islower(ele)){
            ele = small[ele - 'a'];
        }
        else if(isupper(ele)){
            ele = big[ele - 'A'];
        }
    }
    cout<< s<<"\n";

    return 0;
}