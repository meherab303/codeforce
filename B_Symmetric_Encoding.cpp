#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    string encoding;cin>>encoding;

    set<char>st(encoding.begin(),encoding.end()); //range constructor
    deque<char>dq(st.begin(),st.end());  //range constructor
    map<char,char>mp;

    // for(int i=0;i<n;i++){
    //     st.insert(encoding[i]);
    // }

    // for(auto c:st){
    //     dq.push_back(c);
    // }
   
    while(!dq.empty()) {
            char f = dq.front();
            char b = dq.back();
            mp[f] = b;
            mp[b] = f;
            dq.pop_front();
            if(!dq.empty()) dq.pop_back(); 
        }


   for(int i=0;i<n;i++){
    encoding[i]=mp[encoding[i]]; 
   }

    cout<<encoding<<endl;
  } 
  return 0;
}