#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;cin>>n;
 map<int,int>mp; // jeheto fixed kono index nei tai map diye korte hbe.
  while(n--){
    int l,r;cin>>l>>r;
    mp[l]++;    // key ke index and value ke contribution dora hoise (diff er array er moto kolpona kore)
    mp[r+1]--;
    
  }

  long long sum=0;   //shob gula value add korle prefix sum eshe porbe.
 bool ok=false;
  for(auto [key,value]:mp){
    sum+=value;
    if(sum>2){
        ok=true;
        break;
    }
  }

  if(ok){
    cout<<"NO"<<endl;
  }else{
    cout<<"YES"<<endl;
  }

  return 0;
}

// ei problem er main concept:
// kono specific time e jodi 2 er odhik program chole tahole she shob gula show dekhte parbena.
// jei time er contribution map e ashbena tar mane oi time e 2 er odhik program kokhonoi cholbena.