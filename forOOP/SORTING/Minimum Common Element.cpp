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
    cin >> t;
    map <int,int> mp;
    set <int> A,B,C;
    while(t--){
        mp.clear();
        A.clear(),B.clear(),C.clear();
        int n,m,k;
        cin>> n;
        for(int i = 0,a;i< n;i++)
            cin>> a,A.insert(a);
        cin >> m;
        for(int i = 0,a;i< m;i++)
            cin>> a,B.insert(a);
        cin >> k;
        for(int i = 0,a;i< k;i++)
            cin>> a,C.insert(a);
        for(auto ele: A)
            mp[ele]++;
        for(auto ele: B)
            mp[ele]++;
        for(auto ele: C)
            mp[ele]++;

        bool ok = false;
        for(auto ele: mp){
            if(ele.second == 3){
                cout<< ele.first <<"\n";
                ok = true;
                break;
            }
        }
        if(ok) continue;
        else cout<< "No answer"<<"\n"; 
    }


    return 0;
}