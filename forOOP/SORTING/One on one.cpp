#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define ar array
template <class T,class S> inline bool chmin(T &a,const S &b) {return (a> b? a= b, 1: 0);}
template <class T,class S> inline bool chmax(T &a,const S &b) {return (a< b? a= b, 1: 0);}
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n;
    vector <int> A;
    vector <int> B;
    while(cin >> n && n){
        A.clear(),B.clear();
        for(int i = 0,a;i< n;i++)
            cin>> a,A.push_back(a);
        for(int i = 0,b;i< n;i++)
            cin>> b,B.push_back(b);
        sort(all(A));
        sort(all(B));
        int i = 0,j = 0,ans = 0;
        while(i < n && j < n){
            if(B[i] <= A[j]) i++;
            else i++,j++,ans++;
        }
        cout<< ans<<"\n";
    }


    return 0;
}