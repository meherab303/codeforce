#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    string bi;cin>>bi;
    int count=0;
    int i=0;
    while(i<n-1){
        if(bi[i]!=bi[i+1]){
           i+=2;
            count++;
        }else{
            break;
        }
    }
    if(count%2==0)cout<<"Ramos"<<endl;
    else cout<<"Zlatan"<<endl;
  } 
  return 0;
}