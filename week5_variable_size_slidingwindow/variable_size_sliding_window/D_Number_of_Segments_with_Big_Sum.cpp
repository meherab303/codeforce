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

    if(sum>=k){
        good_seg+=n-r+1;  // r porjonto sum>=k hole baki shob element add korleo sum>=k hobe.
    }

    while(sum>=k && l<=r){  // l ke ++ kore dekhte hbe l to r pojnto sum>= k hoina .hoile r theke baki element er jnno o hbe.
        sum-=v[l];
        l++;
        if(sum>=k){
        good_seg+=n-r+1;
        }
    }

    r++;
  }

  cout<<good_seg<<endl;
  return 0;
}


// vector er shob element positive.
//so l to r porjnto sum=> k hbe baki element er jnno o sum>=k hbe.
//then l ++ kore l to r check korte hbe. jodi sum>=k nahoy tahole positive element add korte hbe mane r++;



