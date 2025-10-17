#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    string s;
    cin >> s;
    
    map<string,int> mp;
  
    for(int i=0; i<n-1; i++){   
        string key = s.substr(i, 2);
        mp[key]++;
    }
    
    string ans;
    int mx = 0;
    
    for(auto [key,value] : mp){
        if(value > mx){
            mx = value;
            ans = key;
        }
    }
    
    cout << ans << endl;
    return 0;
}
