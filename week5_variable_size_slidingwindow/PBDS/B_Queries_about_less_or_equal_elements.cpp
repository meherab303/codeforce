#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
template<typename T>using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n,m;
  cin>>n>>m;

  pbds<int>p;
  vector<int>b(m);
  for(int i=0;i<n;i++){
    int x;cin>>x;
    p.insert(x);
  }
  
  for(int j=0;j<m;j++){
    cin>>b[j];
  }

  for(auto val:b){

    int x=p.order_of_key(val+1);  // jeheto less or eqaul tai +1 kore check korte hobe.like jodi 10 shoho chai tahole 11 er niche jotogula ache .
    cout<<x<<" ";

  }
    

  
   
  return 0;
}

