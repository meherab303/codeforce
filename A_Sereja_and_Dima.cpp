#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
  vector<int>v;
  int sereja=0;
  int dima=0;
  while(n--){
    int x;cin>>x;
    v.push_back(x);
  } 

  while(!v.empty()){
    if(v[0]>v[v.size()-1]){
        sereja+=v[0];
        v.erase(v.begin());
    }else{
       sereja+=v[v.size()-1];
        v.pop_back(); 
    }

    if(!v.empty()){
        if(v[0]>v[v.size()-1]){
        dima+=v[0];
        v.erase(v.begin());
    }else{
       dima+=v[v.size()-1];
        v.pop_back(); 
    }

    }
     
  }
  
  cout<<sereja<<" "<<dima<<endl;

  return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
  
//   int n;cin>>n;
//   vector<int>card(n);
//   for(int i=0;i<n;i++)cin>>card[i];

//   int l=0,r=n-1;
//   int sereja=0,dima=0;
//   bool turn=true;

//   while(l<=r){
//     int pick;
//     if(card[l]>card[r]){
//         pick=card[l];
//         l++;
//     }
//     else {
//         pick=card[r];
//         r--;
//     }
//     if(turn)sereja+=pick;
//     else dima+=pick;
//     turn=!turn;
//   }

//   cout<<sereja<<" "<<dima<<endl;
//   return 0;
// }