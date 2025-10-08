#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,x;
  cin>>n>>x;
  int oper=0;
  set<int>s;
  while(n--){
    int x;
    cin>>x;
    s.insert(x);
  } 

  for(int i=0;i<=x;i++){
    if(i==x){
        if(s.count(i))
            oper++;
    }
    else if(i!=x) {
        if(!s.count(i))
            oper++;
    }
  }

  cout<<oper<<endl;
  return 0;
}