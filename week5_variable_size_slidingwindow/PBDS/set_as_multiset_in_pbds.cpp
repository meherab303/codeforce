#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
template<typename T>using pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


int main()

{
    int n;cin>>n;

    pbds<pair<int,int>>p;    // pair akare nile value same holeo idx unique thakbe.tokhon set ke multiset hishebei use kora jabe.and erase hbe.

    for(int i=0;i<n;i++){
        int x;cin>>x;
        p.insert({x,i});
    }

    for(auto [val,idx]:p){
        cout<<val<<" "<<idx<<" "<<endl;
    }
    cout<<endl;

    p.erase({7,3});

    

    
    for(auto [val,idx]:p){
        cout<<val<<" "<<idx<<" "<<endl;
    }
    cout<<endl;




    
  
   
  return 0;
}