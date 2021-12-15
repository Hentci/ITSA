#include <bits/extc++.h>
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define ll long long
#define ar array
using namespace __gnu_pbds;
using namespace std;
template<class T> using oset= tree<T ,null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int t;
    cin>> t;
    oset <int> os;
    vector <string> names;
    while(t--){
        os.clear();
        names.clear();
        int n,k;
        string s;
        cin>> n>> k;
        k--;
        for(int i = 1;i<= n;i++){
            cin>> s;
            os.insert(i);
            names.push_back(s);
        }
        int p = k % n,ans;
        while(!os.empty()){
            int r = *os.find_by_order(p);
            os.erase(r);
            if(!os.empty())
                p = (p + k) % (int)os.size();
            ans = r;
        }
        cout<< names[ans - 1]<<"\n";
    }


    return 0;
}
