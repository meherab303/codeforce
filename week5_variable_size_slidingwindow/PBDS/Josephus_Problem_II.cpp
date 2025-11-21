#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
template<typename T>using pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,k;
  cin>>n>>k;
  pbds<int>p;
  for(int i=1;i<=n;i++){
    p.insert(i);
  }  

  int idx=k%n;
  while(n--){
    auto it=p.find_by_order(idx);
    cout<<*it<<" ";

    p.erase(it);

    if(n){
         idx=(k+idx)%n;
    }
   
  }
    

  
   
  return 0;
}

