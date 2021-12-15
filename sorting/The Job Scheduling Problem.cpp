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
    while(t--){
        int n;
        cin>> n;
        vector <int> arr(n);
        for(auto &ele: arr)
            cin>> ele;
        sort(all(arr));
        int prefix[n + 10] = {};
        for(int i = 1;i<= n;i++)
            prefix[i] = prefix[i - 1] + arr[i - 1];

        cout<< accumulate(prefix,prefix + n,0LL)<<"\n";
    }


    return 0;
}