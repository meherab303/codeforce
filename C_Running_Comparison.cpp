#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  
  while(t--){
    int n;cin>>n;
    vector<int>alice(n);
    vector<int>bob(n);
    int unhappy=0;
    for(int i=0;i<n;i++){
        cin>>alice[i];
    }
    for(int i=0;i<n;i++){
        cin>>bob[i];
    }
    for(int i=0;i<n;i++){
        if(alice[i]*2<bob[i] || alice[i]>bob[i]*2){
            unhappy++;
        }
    }
    cout<<alice.size()-unhappy<<endl;
    

  } 
  return 0;
}