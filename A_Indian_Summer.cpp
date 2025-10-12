// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
  
//   int n;cin>>n;
//   cin.ignore();
//   vector<string>v1;
//   vector<string>v2;
//   bool flag=true;
//  for(int j=0;j<n;j++){
//     string trees,colors;
//     cin>>trees>>colors;
    
//     for(int i=0;i<v1.size();i++){
//         if(v1[i]==trees && v2[i]==colors){
//            flag=false;
//            break;
//         }
//     }
//     if(flag){
//         v1.push_back(trees);
//         v2.push_back(colors);
//         flag=true;
//     }else{
//         flag=true;
//     }
    
    
//  }
//   cout<<v1.size()<<endl;
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  set<pair<string,string>>s;
  while(n--){
    string a,b;
    cin>>a>>b;
    s.insert({a,b});
  } 
  cout<<s.size()<<endl;
  return 0;
}