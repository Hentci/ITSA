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
    while(cin >> n){
        int cnt[100005]={0},a=1,b=1,m=n;
        for(int i=2;i<=100000;i++){
            while(n%i==0)cnt[i]++,n/=i;
        }
        for(int i=2;i<=100000;i++){
            while(cnt[i]>=2){
                b*=i;
                cnt[i]-=2;
            }
        }
        for(int i=2;i<=100000;i++){
            while(cnt[i]--)a*=i;
        }
        a*=n;
        cout<< m << " = "<< a << '*'<<b <<"^2" <<endl;
    }

    return 0;
}