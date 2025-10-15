#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  map<string,int>regis;

 while(n--){
  string s;cin>>s;
  if(regis.find(s)!=regis.end()){
    cout<<s+to_string(regis[s])<<endl;
    regis[s]++;
  }else{git
    regis[s]=1;
    cout<<"OK"<<endl;
  }
 }
 
  return 0;
}