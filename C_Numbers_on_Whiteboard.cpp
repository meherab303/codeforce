#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;

        vector<int> v;
        for(int i=1;i<=n;i++) v.push_back(i);

        vector<pair<int,int>> v_p;
        
        
        while(v.size() > 1){
            int a = v.back(); v.pop_back();
            int b = v.back(); v.pop_back();
            int bhag = int(ceil((a + b)/2.0));   
            v.push_back(bhag);
            v_p.push_back({a,b});
        }

        cout << v[0] << "\n"; 
        for(auto &p : v_p){
            cout << p.first << " " << p.second << "\n";
        }
    }
    return 0;
}
