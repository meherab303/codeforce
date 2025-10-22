#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,m;
  cin>>n>>m;

  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  
  vector<int>result(n);
  unordered_set<int>ust;
  for(int i=n-1;i>=0;i--){
    ust.insert(v[i]);
    result[i]=ust.size();
  }

  while(m--){
    int l;cin>>l;
    cout<<result[l-1]<<endl;

  }

  return 0;
}