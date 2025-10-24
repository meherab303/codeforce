#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    map<int,int>mp;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }
    priority_queue<int>pq;

    for(auto [key,value]:mp){
        pq.push(value);
    }

    while(!pq.empty()){
        if(pq.size()<2){
            break;
        }
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        a--,b--;
        if(a>0)pq.push(a);
        if(b>0)pq.push(b);
    }

    if(pq.size()==0)cout<<0<<endl;
    else cout<<pq.top()<<endl;

  } 
  return 0;
}