#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    string s;cin>>s;
    string output="";
    vector<int>lower,upper;  
    for(int i=0;i<s.size();i++){
        char c=s[i];
        if(c=='b'){
            if(!lower.empty()){
                int pos=lower.back();
                lower.pop_back();
                output[pos]='#';
            }

        }else if(c=='B'){
            if(!upper.empty()){
                int pos=upper.back();
                upper.pop_back();
                output[pos]='#';
            }

        }else{
            output+=c;
            if(islower(c))lower.push_back(output.size()-1);
            else upper.push_back(output.size()-1);
        }
    }
    string final_output="";
    for(auto c:output){
        if(c!='#')final_output+=c;
    }
    cout<<final_output<<endl;
  } 
  return 0;
}