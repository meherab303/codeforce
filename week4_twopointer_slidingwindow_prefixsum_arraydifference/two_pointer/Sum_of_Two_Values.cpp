#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,x;
  cin>>n>>x;

  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  map<int,int>mp;

  for(int i=0;i<n;i++){
    int need=x-v[i];     // given sum theke v[i] minus korle jei value pabo oita map e thaklei target 2ta value peye gechi.
    if(mp.find(need)!=mp.end()){
        cout<<mp[need]+1<<" "<<i+1<<endl;  // map e find kore paisi mane map er key tai vector e  agee ashche 
        return 0;
    }else{
        mp[v[i]]=i;  // find kore na paile key hishbe vector er value and value hishebe vector er oi valuer index
    }
  }
  cout<<"IMPOSSIBLE"<<endl;

  return 0;
}