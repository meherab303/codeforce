#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int n,q;cin>>n>>q;
  vector<int> main_array(n+1);

  for(int i=1;i<=n;i++){
    cin>>main_array[i];
  }

  vector<int>diff_array(n+2); // contribution of index

  for(int i=1;i<=q;i++){
    int l,r;
    cin>>l>>r;
    diff_array[l]++;
    diff_array[r+1]--;
  }

  vector<int>pref_sum_diff_array(n+2);

  for(int i=1;i<n+2;i++){
   pref_sum_diff_array[i]=pref_sum_diff_array[i-1]+diff_array[i];
  }

 sort(pref_sum_diff_array.rbegin(),pref_sum_diff_array.rend());
 sort(main_array.rbegin(),main_array.rend());

//  for(int i=0;i<n+1;i++){
//     cout<<main_array[i]<<" ";
//  }
//  cout<<endl;
//  for(int i=0;i<n+2;i++){
//     cout<<pref_sum_diff_array[i]<<" ";
//  }

 long long sum=0;
 for(int i=0;i<n+1;i++){
    sum+=(1LL*pref_sum_diff_array[i]*main_array[i]);
 }
 cout<<sum<<endl;
  return 0;
}