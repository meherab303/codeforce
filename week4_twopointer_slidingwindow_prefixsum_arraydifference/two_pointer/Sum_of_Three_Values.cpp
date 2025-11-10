#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,k;
  cin>>n>>k;
  
  vector<pair<int,int>>v(n+1);
  
  for(int i=1;i<=n;i++){
    cin>>v[i].first;
    v[i].second=i;
   
  }
  sort(v.begin(),v.end());

  for(int i=1;i<=n-2;i++){
    long long need_sum=k-v[i].first;

    
    int l=i+1;
    int r=n;

    while(l<r){   //  two pointer method is used here 
       long long target_sum=v[l].first+v[r].first;   // first value ta baad diye target_sum khuje ber korbo rest of the value theke
       if(target_sum==need_sum){
        cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<<endl;
        return 0;
       }
        else if(target_sum>need_sum){
            r--;
        }else{
            l++;
        }
    }
    
  }
  cout<<"IMPOSSIBLE";

  return 0;
}


//main concept
//vector e pair rakhbo value+ index.
// sort kore loop chalabo.
//prothom ta rekhe baki gular sathe two pointer method use korbo.