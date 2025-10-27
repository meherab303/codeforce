#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n;cin>>n;

    priority_queue<int>pq;
    multiset<int>mst;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        pq.push(x);
    }
    


    while(!pq.empty()){
        int val=pq.top();
        pq.pop();
        auto it=mst.upper_bound(val);
       
        if(it!=mst.end() && *it-1==val){
            mst.erase(it);
            mst.insert(val);
           
        }else{
            mst.insert(val);
        }
    }
  
    cout<<mst.size()<<endl;
  } 
  return 0;
}