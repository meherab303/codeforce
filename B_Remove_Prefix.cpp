#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    unordered_set<int>st;

    for(int i=n-1;i>=0;i--){
        if(st.count(v[i])){
            break;
        }else{
            st.insert(v[i]);
        }
    }
    cout<<n-st.size()<<endl;
}
  return 0;
}