#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t ;cin>>t;
  while(t--){
    int n;cin>>n;
    string s;cin>>s;
    long long total=0;
    vector<long long>profit;

    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            total+=i;
            profit.push_back((n-1-i)-i);  //L-->R korle profit
        }else{
            total+=n-1-i;
            profit.push_back(i-(n-1-i)); //R-->L korle profit
        }
       
    }
    sort(profit.begin(),profit.end(),greater<long long>());

    for(int i=0;i<n;i++){
        if(profit[i]>0){
            total+=profit[i];
            cout<<total<<" ";
        }else{
            cout<<total<<" ";
        }
    }
    cout<<endl;

    
  } 
  return 0;
}