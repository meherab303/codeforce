#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n,k;cin>>n>>k;
    string s;cin>>s;

    int r=0,count=0;
    
    while(r<n){

        
        if(s[r]=='B'){
            count++;
            r+=k;
        }else{
            r++;
        }
    }
    
    cout<<count<<endl;
  } 
  return 0;
}