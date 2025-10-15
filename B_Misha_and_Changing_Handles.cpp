#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  map<string,string>final_handle;
  map<string,string>new_req_handle;
  while(n--){
    string a,b;
    cin>>a>>b;

    if(new_req_handle.find(a)!=new_req_handle.end()){
      string s=new_req_handle[a];
      final_handle[s]=b;
      new_req_handle.erase(a);
      new_req_handle[b]=s;
    }else{
       final_handle[a]=b;
     new_req_handle[b]=a;
    }
   




  }

 cout<<final_handle.size()<<endl;
 for(auto [old,neww]:final_handle){
  cout<<old<<" "<<neww<<endl;
 }

  
  return 0;
}