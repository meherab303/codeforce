#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  long long k;
  cin>>n>>k;

  vector<int>v(n+1);
  for(int i=1;i<=n;i++){
    cin>>v[i];
  }

  int l=1,r=1,long_seg=0;
  long long sum=0;

  while(r<=n){
    sum+=v[r];
    
    if(sum<=k){
        long_seg=max(long_seg,r-l+1);
        r++;
    }else{
        sum-=v[l];
        l++;
        r++;
    }
  }

  cout<<long_seg<<endl;
  return 0;
}


//1.variable size sliding window te amader condition check korte hobe