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
  
  int n;cin>>n;

  pbds<int>p;
  for(int i=1;i<=n;i++){
    p.insert(i);
  }

  int idx=1%n;  // jodi size 1 hoi tahole 0 idx theke start nahoy always 1 theke start

  while(n--){   // prottekbar +2(prottek iteration abar ager 2 er sathe +2 hbe ja complex) na kore (set er size 1 reduce+ idx 1 increase).
    auto it=p.find_by_order(idx);
    cout<<*it<<" ";

    p.erase(it);

    if(n!=0)   // 0 diye kichu bhag jaina tai check.
        idx=(idx+1)%n;

  }
    

  
   
  return 0;
}

