//contest

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int t;cin>>t;
//   while(t--){
//     int n,k;
//     cin>>n>>k;
//     string s;
//     cin>>s;
  
//     for(int i=0;i<n;i++){
//         if(s[i]=='I'){
//            if(i==0 && s[i+1]!='I'){
//             s[i]=s[i+1];
//            }

//         }
//     }
//     long long total_c;
//     if(countI==n){
//          total_c=n-1;
//     }else{
//          total_c=countOt+countI;
        
//     }

//     bool last_fast=false;
    
  
//     if((s[0]=='I' && s[n-1]=='I' ) || s[0]==s[n-1]){
//         last_fast=true;
//     }
//     if(last_fast){
//         cout<<(total_c*k)+(k-1)<<endl;
//     }else{
//         cout<<(total_c*k)<<endl;
//     }
//   }  
    

  
   
//   return 0;
// }

