#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;
template<typename T>using pbds=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

int median(int k){
    if(k%2==0){
        return (k/2)-1;
    }else{
        return (k)/2;
    }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,k;
  cin>>n>>k;
  
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  pbds<pair<int,int>>p;
  int l=0;

  for(int r=0;r<n;r++){

   
    p.insert({v[r],r});
    int s=p.size();
    if(s==k){
        auto it=p.find_by_order(median(k));
        cout<<it->first<<" ";
        p.erase({v[l],l});
        l++;
    }
    
    
    
    
  }  
    

  
   
  return 0;
}

