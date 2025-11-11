#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int cas,tur;
  cin>>cas>>tur;
  
  vector<int>castle(cas+2,0);

  for(int i=1;i<=tur;i++){
    int l,r;cin>>l>>r;
    castle[l]++;
    castle[r+1]--;
  }

  int minn=INT_MAX;
  for(int i=1;i<=cas;i++){
    castle[i]=castle[i]+castle[i-1];
    minn=min(minn,castle[i]);
  }

  cout<<minn<<endl;

  return 0;
}

// main concept 
// prettekta castle e each er turret er contribution dekhbo
// jei castle e minimum turret guard dei toto turren remove korle minimum turret remove kore at least 1ta castle guard free kora jabe .