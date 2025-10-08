#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int t;cin>>t;
  while(t--){
    int l,r,u,d;
   
    cin>>l>>r>>d>>u;
   
    double AB=sqrt(pow((-l-0),2)+pow((0-u),2));
    double BC=sqrt(pow((0-r),2)+pow((u-0),2));
    double CD=sqrt(pow((r-0),2)+pow((0+d),2));
    double DA=sqrt(pow((0-l),2)+pow((-d-0),2));
    double AC=sqrt(pow((-l-r),2)+pow((0-0),2));
    double BD=sqrt(pow((u+d),2)+pow((0-0),2));
    
    
     if(fabs(AB - BC) < 1e-6 && fabs(BC - CD) < 1e-6 && fabs(CD - DA) < 1e-6 &&fabs(AC - BD) < 1e-6 ){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    }
    
  return 0;
}