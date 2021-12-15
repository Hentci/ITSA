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
        string A,B;
        for(int i = 0;i< n;i++){
            int tmp = arr[i];
            stringstream ss;
            ss << tmp;
            A += ss.str();
        }
        for(int i = n - 1;i>= 0;i--){
            int tmp = arr[i];
            stringstream ss;
            ss << tmp;
            B += ss.str();
        }
        cout<< A<<"\n"<< B<<"\n";
    }


    return 0;
}