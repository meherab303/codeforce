//contest
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int>v(n);
	    map<int,int>mp;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	       if(mp.find(4-v[i])!=mp.end()){
	          count++; 
	       }else{
	        mp[v[i]]++;   
	       }
	        
	    }
	    cout<<count<<endl;
	    
	    
	}

}
