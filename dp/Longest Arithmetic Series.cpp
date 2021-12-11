#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        stringstream ss;
        ss<<s;
        int k=0,arr[50],dp[50];
        while(ss>>arr[k++]);
        sort(arr,arr+k);
        for(int i=0;i<=k;i++)cout<<arr[i]<<'\n';
        for(int i=1;i<k;i++)cout<<i<<" "<< dp[i]<<"\n";
        int ma=1,cnt=0;
        for(int i=1;i<k-1;i++){
            if(dp[i]==dp[i+1])cnt++;
            else ma=max(ma,cnt),cnt=0;
        }
        cout<<ma+1<<'\n';
    }
}