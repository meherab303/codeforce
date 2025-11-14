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

  int l=1,r=1;
  long long good_seg=0;
  long long sum=0;

  while(r<=n){
    sum+=v[r];
    
    if(sum<=k){
        good_seg+=r-l+1;
        r++;
    }else{

        while(sum>k && l<=r){   // jotokkhon na sum k er shoman ba chuto hocche (obosshoi r range er modde .r ke cross kora jabena) tokkhn left contribution remove korte hbe jeno ektao valid good segment baad na pore.
             sum-=v[l];
             l++;
        }
        if(sum<=k){  // emon o hote pare l  r porjnto ashche but sum k theke still boroi ache
             good_seg+=r-l+1; // jokhon sum k er shoman ba chuto hbe tokkhn e oi good subarray  add korte hbe.     
        }

        r++;
       
    }
  }

  cout<<good_seg<<endl;
  return 0;
}


