#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,k,q;
  cin>>n>>k>>q;
  
  const int MAX=200000;
  vector<long long>diff_array_reci(MAX+2,0);

  for(int i=1;i<=n;i++){
    int l,r;
    cin>>l>>r;
    diff_array_reci[l]++;
    diff_array_reci[r+1]--;
  }

  //prefix sum of diif_array_reci
  for(int i=1;i<=MAX;i++){
    diff_array_reci[i]+=diff_array_reci[i-1];
  }

  vector<long long>admissble(MAX+1,0);
  // detect which temperature is admissble
  for(int i=1;i<=MAX;i++){
    if(diff_array_reci[i]>=k){
        admissble[i]=1;
    }
  }

  // prefix sum of admissble 

  for(int i=1;i<=MAX;i++){
    admissble[i]+=admissble[i-1];
  }

  while(q--){
    int qL,qR;
    cin>>qL>>qR;
    cout<<admissble[qR]-admissble[qL-1]<<endl;
  }

  return 0;
}