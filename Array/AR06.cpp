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
    cin >> n;
    vector <vector <int>> arr(n,vector <int>(n));
    for(int i = 0;i< n;i++){
        for(int j = 0;j< n;j++)
            cin >> arr[i][j];
    }
    vector <int> permu;
    for(int i = 0;i< n;i++)
        permu.push_back(i);
    ll mx = -1;
    vector <int> mx_permu;
    do{
        ll sum = 0;
        for(int i = 0;i< n;i++)
            sum+= arr[i][permu[i]];
        if(sum > mx){
            mx = sum;
            mx_permu = permu;
        }
        // for(auto ele: permu)
        //     cout<< ele << " ";
        // // cout<< sum <<" ";
        // cout<<"\n";
    }while(next_permutation(all(permu)));

    for(int i = 0;i< n;i++){
        cout<< "boy "<< i + 1 << " pair with girl "<< mx_permu[i] + 1 <<"\n";
    }

    return 0;
}