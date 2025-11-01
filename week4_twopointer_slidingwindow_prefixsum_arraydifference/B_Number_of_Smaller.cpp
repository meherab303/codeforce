#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n,m;cin>>n>>m;
  vector<int>n1(n);
  vector<int>m1(m);

  for(int i=0;i<n;i++){
    cin>>n1[i];
  }

  for(int i=0;i<m;i++){
    cin>>m1[i];
  }

  int l=0,count=0,r=0;
  while(r<m){

    if(l<n && n1[l]<m1[r]){
        l++,count++;

    }else{
        cout<<count<<" ";
        r++;
    }
  }
  return 0;
}