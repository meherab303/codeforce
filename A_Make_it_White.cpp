#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<char> v(n);
 
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int first_b=-1;
    int last_b=-1;
    for(int i=0;i<n;i++){
        if(v[i]=='B'){
            first_b=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]=='B'){
            last_b=i;
            break;
        }
    }
    
    if(first_b==-1){
        cout<<0<<endl;
        continue;
    }

    int count=last_b-first_b+1;
    cout<<count<<endl;


  } 
  return 0;
}