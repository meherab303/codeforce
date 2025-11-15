#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  
  int n;
  ll k;
  cin>>n>>k; 
  
  vector<int>v(n+1);

  for(int i=1;i<=n;i++){
    cin>>v[i];
  }

  int l=1,r=1,good_seg=INT_MAX;
  ll sum=0;

  while(r<=n){

    sum+=v[r];
    if(sum>=k){
        good_seg=min(good_seg,r-l+1);
    }

    while(sum>=k && l<=r){   //jeheto at least sum and shortest segment tai sum jokhon 20 hoye jabe tokhon ar barabona.minus korbo
        sum-=v[l];
        l++;
        if(sum>=k){
             good_seg=min(good_seg,r-l+1); //prottektabar minus kore check korbo jodi sum still 20 ba er beshi hoi .
        }
    }
    r++;
  }

  if(good_seg!=INT_MAX){
    cout<<good_seg<<endl;
  }else{
    cout<<-1<<endl;
  }



  return 0;
}