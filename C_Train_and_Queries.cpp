// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
  
//   int t;cin>>t;
//   while(t--){
//     int st,que;
//     cin>>st>>que;
//     vector<int>v(st);
//     for(int i=0;i<st;i++){
//        cin>>v[i];
//     }

//     map<int,set<int>>mp;

//     for(int i=0;i<st;i++){
//        mp[v[i]].insert(i); 
//     }

//     for(int i=0;i<que;i++){
//         int q1,q2;cin>>q1>>q2;
//         int a=-1,b=-1;

//         if(!mp[q1].empty()){
//             a=*mp[q1].begin();
//         }
//         if(!mp[q2].empty()){
//             b=*mp[q2].rbegin();
//         }


//         if(a==-1 || b==-1 ||a>b){
//             cout<<"NO"<<endl;
//         }else{
//             cout<<"YES"<<endl;
//         }
       

//     }
    

    
//   } 
//   return 0;
// }

//using vector is better for complexity

#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int st,que;
    cin>>st>>que;
    vector<int>v(st);
    for(int i=0;i<st;i++){
       cin>>v[i];
    }

    map<int,vector<int>>mp;

    for(int i=0;i<st;i++){
       mp[v[i]].push_back(i); 
    }

    for(int i=0;i<que;i++){
        int q1,q2;cin>>q1>>q2;
        int a=-1,b=-1;

        if(!mp[q1].empty()){
            a=mp[q1][0];
        }
        if(!mp[q2].empty()){
            b=mp[q2].back();
        }


        if(a==-1 || b==-1 ||a>b){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
       

    }
    

    
  } 
  return 0;
}