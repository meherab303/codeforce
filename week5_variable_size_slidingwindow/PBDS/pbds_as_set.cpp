#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
template<typename T>using pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


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

    p.erase(7);   //set e erase hoi.

     for(auto val:p){
        cout<<val<<" ";
    }
    cout<<endl;




    
  
   
  return 0;
}