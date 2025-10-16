// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
  
//   int t;cin>>t;
//   while(t--){
//     string s;cin>>s;
//     if(s.size()==1){
//         if(s[0]=='z'){
//             s+=char(s[0]-1);
//         }else{
//             s+=char(s[0]+1);
//         }
        
//     }else{
//         bool flag=false;
//          for(int i=0;i<s.size()-1;i++){

//              if(s[i]==s[i+1]){
//                 if(s[i]=='z'){
//                     s.insert(i+1,1,s[i]-1);
//                 flag=true;
//                 break;
//             }else{
//                 s.insert(i+1,1,s[i]+1);
//                 flag=true;
//                 break;
//             }
                
//            }
//     }
//     if(!flag){
//         if(s[s.size()-1]=='z'){
//             s+=char(s[s.size()-1]-1);
//         }else{
//             s+=char(s[s.size()-1]+1);
//         }
//     } 

//     }
   
//     cout<<s<<endl;
//   } 
  
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;
char newChar(char c){
    if(c=='z')return 'y';
    else{
        return c+1;
    }
}
int main()
{
  
  int t;cin>>t;
  while(t--){
    string s;cin>>s;
    bool flag=false;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            s.insert(i+1,1,newChar(s[i]));
            flag=true;
            break;
        }
    }
    if(!flag)s.insert(s.size(),1,newChar(s.back()));
    cout<<s<<endl;
  } 
  return 0;
}