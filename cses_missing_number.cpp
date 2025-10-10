#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  vector<int>v(n-1);
  vector<int>v2(n+1,false);
  for(int i=0;i<n-1;i++){
    cin>>v[i];
    v2[v[i]]=true;
  } 

  for(int i=1;i<=n;i++){
    if(!v2[i]){
        cout<<i<<endl;
        break;
    }
  }

  return 0;
}