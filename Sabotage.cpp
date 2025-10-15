#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n,x,s;
    cin>>n>>x>>s;
    vector<int>m_s;

    for(int i=0;i<n;i++){
        int y;cin>>y;
        m_s.push_back(y);
    }
   
    sort(m_s.begin(),m_s.end(),greater<int>());

     
    for(int i=0;i<s;i++){
        m_s[i]=0;
        x+=100;
    }

    int count=1;
    for(int i=0;i<m_s.size();i++){
        if(m_s[i]>x){
            count++;
        }
    }
    cout<<count<<endl;
    

  } 
  return 0;
}

