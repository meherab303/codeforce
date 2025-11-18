#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
template<typename T>using pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

//less_equal dile multiset hishebe use hbe.
int main()

{
    int n;cin>>n;

    pbds<int>p;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        p.insert(x);
    }

    for(auto val:p){
        cout<<val<<" ";
    }

    cout<<endl;

    auto it=p.find_by_order(3);
    cout<<*it<<endl;

    int val=p.order_of_key(7);
    cout<<val<<endl;

  
   
  return 0;
}