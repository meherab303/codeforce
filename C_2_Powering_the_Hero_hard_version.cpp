#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  
  int t;cin>>t;
  while(t--){
    multiset<int>mst;
    int n;cin>>n;
    ll army_p=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;

        if(x!=0){
             mst.insert(x);
        }else if(x==0){
            if(!mst.empty()){
                auto it=--mst.end();
                army_p+=*it;
                mst.erase(it);
            }
            

        }
       
    }
    cout<<army_p<<endl;

    
  } 
  return 0;
}