#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  map<pair<int,int>,string>mp;
  while(n--){
    int x,y;string a;
    cin>>x>>y>>a;
   mp[{x,y}]=a;

  } 
  int t;cin>>t;
  
  while(t--){
    int b,c;
    cin>>b>>c;
    cout<<mp[{b,c}]<<endl;
    
  }
  return 0;
}
//m