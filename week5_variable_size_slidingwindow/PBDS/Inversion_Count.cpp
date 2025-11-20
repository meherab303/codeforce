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
  
    
    int t;cin>>t;
     string ss;
     getline(cin, ss);
    while(t--){
        int n;cin>>n;
        pbds<int>p;
        long long count=0;
        for(int i=0;i<n;i++){
            int x;cin>>x;
           
            p.insert(x);
            int y=p.order_of_key(x);
            count+=i-y;
         

        }

        string s;
        getline(cin, s);

        cout<<count<<endl;
    }
  
   
  return 0;
}

