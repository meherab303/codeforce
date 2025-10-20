#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    deque<int>dq;

    for(int i=0;i<n;i++){
        if(i==0){
            dq.push_back(v[i]);
        }else{
            int f=dq.front();
                if(v[i]<f){
                    dq.push_front(v[i]);
                }else{
                    dq.push_back(v[i]);
                }
        }
        
    }

    for(int i=0;i<n;i++){
        cout<<dq[i]<<" ";
    }

    cout<<endl;

  }
   
  return 0;
}