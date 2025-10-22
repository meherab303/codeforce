#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  multiset<int>mst;

  while(n--){  //eivabe n-- korle n er value 0 hoye jabe.pore n ta ar use kora jabena.
    int x;cin>>x;
    mst.insert(x);
  }

  for(int i=0;i<n;i++){
     int x;cin>>x;
    mst.insert(x);
  }


  int count=0;

  for(int i=1;i<=n;i++){
    auto it=mst.lower_bound(i);
   
    if(it!=mst.end()){
        count++;
        mst.erase(it);
    }else{
        break;
    }

  }

  cout<<count<<endl;
  return 0;
}