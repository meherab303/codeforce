#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int n,k;cin>>n>>k;
    string s;cin>>s;

    int l=0,r=0;

    int ans=INT_MAX;
    int countB=0;

    while(r<n){

        if(s[r]=='B'){   //1.condition.
            countB++;
        }

        if(r-l+1==k){  // when window(k) hit
            ans=min(ans,k-countB);  //2.update ans 
            if(s[l]=='B'){ //3.old contribution delete 
                countB-=1;
            }
            l++,r++;  //4.new window create and make the l pointer to the first and r pointer to last.
        }
        else{   //window(k) not hit,update right pointer
             r++; 
        }
        

        


    }
    cout<<ans<<endl;

 
  } 
  return 0;
}