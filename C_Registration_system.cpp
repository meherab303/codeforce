#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  vector<string>v;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    int count=0;

    for(int j=0;j<v.size();j++){
      if(v[j]==s){
        count++;
      }  
    }

    if(count==0){
        cout<<"OK"<<endl;
    }else{
        string s1=s+to_string(count);
        cout<<s1<<endl;
        count=0;
    }
    v.push_back(s);
   
  }
 
  return 0;
}