#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  int position=1;
  set<pair<int,int>>st;
  multiset<pair<int,int>>mst;
  vector<int>result;

  while(t--){
    
    int x;
    cin>>x;
    if(x==1){
        int money;cin>>money;
        st.insert({position,money});
        mst.insert({money,-position});
        position++;

    }else if(x==2){
      int pos=st.begin()->first,money=st.begin()->second;
      cout<<pos<<" ";
      st.erase(st.begin());
      mst.erase({money,-pos});
    }else{
      int pos=-mst.rbegin()->second,money=mst.rbegin()->first;
     cout<<pos<<" ";
      mst.erase(--mst.end());
      st.erase({pos,money});
    }
    

    
    
    
  } 
  

  return 0;
}