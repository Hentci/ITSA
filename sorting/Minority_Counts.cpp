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
    int p,r;
    char a;
    while(t--){
        cin>> p>> r;
        set <int> ans;
        for(int i = 0;i< p;i++)
            ans.insert(i);
        vector <int> votes[p];
        for(int i= 0;i< p;i++){
            for(int j= 0;j< r;j++){
                cin>> a;
                a == 'Y' ? votes[i].push_back(1) : votes[i].push_back(0);
            }
        }
        for(int i= 0;i< r;i++){
            int Yes = 0;
            for(auto ele: ans){
                votes[ele][i] ? Yes++ : Yes--;
            }
            // cout<< Yes <<"\n";
            if(Yes == 0 || abs(Yes) == (int)ans.size()) continue;
            vector <int> arr;
            if(Yes > 0){
                for(auto ele: ans)
                    if(votes[ele][i]){
                            // ans.erase(ele); //TODO
                        arr.push_back(ele);
                    }
            }
            else{
                for(auto ele: ans)
                    if(!votes[ele][i]){
                        arr.push_back(ele);
                            // ans.erase(ele); //TODO
                    }
            }
            for(auto ele: arr)
                ans.erase(ele);
        }
        // cout<< ans.size()<<"\n";
        for(auto ele: ans)
            cout<< ele + 1<<" ";
        cout<<"\n";
    }

    return 0;
}