#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  multiset<int>mst;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    
    auto it=mst.upper_bound(x);
    if(it!=mst.end()){
        mst.erase(it);
        mst.insert(x);
    }else{
        mst.insert(x);
    }
  }
  cout<<mst.size()<<endl;
  return 0;
}