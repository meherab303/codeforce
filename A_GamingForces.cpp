#include<bits/stdc++.h>
using namespace std;


int main()
{
  
  int t;
  cin>>t;
  while(t--){
      int n;cin>>n;
      vector<int>one;
      vector<int>gt_one;
      for(int i=0;i<n;i++){
          int a;cin>>a;
          if(a>1)
            gt_one.push_back(a);
          else if(a==1)
                one.push_back(a);
      }

      int s_one=(one.size())%2==0?(one.size())/2:((one.size())/2)+1;
      cout<<s_one+gt_one.size()<<endl;
    
  }
  return 0;
}