#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  
  int n,m;cin>>n>>m;

  vector<int>a(n),b(m);

  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<m;i++){
    cin>>b[i];
  }

  vector<int>v;
  int l=0,r=0;
  long long count=0;
  while(l<n && r<m){
    if(a[l]>b[r])r++;
    else if(a[l]<b[r])l++;
    else{
        int countA=0,countB=0;
        int current_element=a[l];
        while(l<n && a[l]==current_element){
            countA++;
            l++;
            }

        while(r<m && b[r]==current_element){
            countB++;
            r++;
        } 
        count+=(1ll*countA*countB);
    }

    }
  
  cout<<count<<endl;
  return 0;
}