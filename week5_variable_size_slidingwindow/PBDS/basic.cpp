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

//set and multiset e ja ja kora jai shob e kora jai pbds e 
// shudu multiset e erase hoina.
//extra 2ta fucntion i)find_by_order(value) ii)order_of_key(idx)

// PBDS as set (ordered_set<T>): ❌ unsupported

//1. find(x)

//2. count(x)



// PBDS as multiset (ordered_set<pair<T,int>>): ❌ unsupported

//1. direct find(value)

//2. direct erase(value)

//3. count(value)

//4. erase all values at once