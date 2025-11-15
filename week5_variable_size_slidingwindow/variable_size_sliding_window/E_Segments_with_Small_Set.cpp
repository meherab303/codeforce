#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n,k;
  cin>>n>>k;

  vector<int>v(n+1);
  for(int i=1;i<=n;i++){
    cin>>v[i];
  }

  int l=1,r=1;
  long long good_seg=0;
  map<int,int>count;

  while(r<=n){
    count[v[r]]++;
    if(count.size()<=k){
        good_seg+=r-l+1;
        r++;
    }else{

        while(count.size()>k && l<=r){
            count[v[l]]--;
            if(count[v[l]]==0){
               count.erase(v[l]);
            }
            l++;
        }
        if(count.size()<=k){
        good_seg+=r-l+1;
        
       }
       r++;
        

    }
   
  }
   cout<<good_seg<<endl;
  return 0;
}