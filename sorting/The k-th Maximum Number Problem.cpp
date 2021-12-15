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
        int n,k;
        cin>> n>> k;
        vector <int> arr(n);
        for(auto &ele: arr)
            cin>> ele;
        sort(all(arr),greater<int>());
        cout<< arr[k - 1]<<"\n";
    }


    return 0;
}