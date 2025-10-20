#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  string s;cin>>s;
  vector<char>v;

 
    for(char c:s){
        if(c=='<'){ //C++ always associates an else with the closest unmatched if.tai eikhane if er pore bracket na dile else ta inner if er sathe match hoye jabe.
            if(!v.empty())v.pop_back();  
        } 

        else  v.push_back(c);
    }

  string result=" ";
  for(int i=0;i<v.size();i++){
    result+=v[i];
  }
  
  cout<<result<<endl;
  return 0;
}