#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    map<int,set<int>>mp;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x;cin>>x;
    vector<string>vs(n);
    for(int i=0;i<x;i++){
       cin>>vs[i];

    }
    for(int i=0;i<x;i++){
        for(int j=0;i<vs[i].size();j++){
            mp[vs[i][j]].insert(v[j]);
        }
    }
    
  } 
  return 0;
}