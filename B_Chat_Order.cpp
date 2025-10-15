// 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<string>v(n);
    unordered_set<string>name;   //set e insertion searching deletion O(1) e hoi.

   for(int i=0;i<n;i++){
    cin>>v[i];
   }

   for(int i=n-1;i>=0;i--){
     if(!name.count(v[i])){
        name.insert(v[i]);
        cout<<v[i]<<endl;
     }
   }

   

    
}
