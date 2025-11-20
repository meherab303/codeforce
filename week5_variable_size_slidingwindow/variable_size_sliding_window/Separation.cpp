//contest
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

  int t;cin>>t;
  while(t--){
    int n,x;
    cin>>n>>x;
    pbds<int>p;
    for(int i=0;i<n;i++){
        int y;cin>>y;
        p.insert(y);
    }
    int chuto=p.order_of_key(x);
    int shoman=p.order_of_key(x+1)-chuto;
    int boro=n-(chuto+shoman);
    if(boro==n || chuto==n ||shoman>0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }
    

  
  
   
  return 0;
}

