#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int m=3;
    map<string,vector<int>>word;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            string s;
            cin>>s;
            word[s].push_back(i);
        }
    }

    vector<int>ans(m);
    for(auto [key,value]:word){
        vector<int>v=value;
        if(v.size()==1){
            ans[v[0]]+=3;

        }
        else if(v.size()==2){
            ans[v[0]]+=1;
            ans[v[1]]+=1;
        }
    }

    for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

  } 
  return 0;
}