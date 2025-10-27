#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,que;
  cin>>n>>que;
  vector<priority_queue<int>>v(n);
  for(int i=0;i<que;i++){
    int y,qt;cin>>y>>qt;
    if(y==0){
        int x;
        cin>>x;
        v[qt].push(x);
    }else if(y==1){
        
         if(!v[qt].empty()){
             cout<<v[qt].top()<<endl;
         }
       
    }else{
        
        if(!v[qt].empty())v[qt].pop();
        
    }
  }

  return 0;
}