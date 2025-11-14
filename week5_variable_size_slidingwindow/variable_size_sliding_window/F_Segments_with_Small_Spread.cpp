#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  long long k;
  cin>>n>>k;

  vector<long long>v(n+1);
  for(int i=1;i<=n;i++){
    cin>>v[i];
  }

  int l=1,r=1;
  long long good_seg=0;

  multiset<long long>mst;
  while(r<=n){
    mst.insert(v[r]);
    long long mx1=*(prev(mst.end()));
    long long mn1=*(mst.begin());

   

    if(mx1-mn1<=k){
        good_seg+=(r-l+1);
        r++;
    }else{

        while(l<=r){
            long long mx2=*prev(mst.end());
            long long mn2=*mst.begin();

            if(mx2-mn2<=k) break;
           
           
            mst.erase(mst.find(v[l]));
            l++;
        }

        long long mx3=*prev(mst.end());
        long long mn3=*mst.begin();

        if(mx3-mn3<=k){
            good_seg+=r-l+1;
        }
        r++;
        
    }
  }
  cout<<good_seg<<endl;
  return 0;
}