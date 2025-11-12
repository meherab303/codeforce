#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,k;
  cin>>n>>k;
  vector<int>v(n+1);

  for(int i=1;i<=n;i++){
    cin>>v[i];
  }

  map<int,long long>freq;   //map e distince value gula rakhbe
  int left=1;
  long long ans=0;

  for(int right=1;right<=n;right++){
    freq[v[right]]++;  // age map e value er count add.

    while((int)freq.size()>k){  // jotokkhn na distinc value k ba tar chuto  hocche totokkhn left value er count -- korbo.(check for this input 2 2 2 3 1 1 )
        freq[v[left]]--;
        if(freq[v[left]]==0)freq.erase(v[left]);
        left++;
    }

    ans+=right-left+1;
  }
  cout<<ans<<endl;
  return 0;
}