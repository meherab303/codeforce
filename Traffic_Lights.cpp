#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int x;cin>>x;
  
  set<int>lights={0,x};
  multiset<int>gaps={x};

  int n;cin>>n;
  for(int i=0;i<n;i++){
    int light;cin>>light;

    auto right_light=lights.upper_bound(light);
    auto left_light=prev(right_light);

    int old_gap_bet_them=*right_light-*left_light;
    auto old_gap_it=gaps.find(old_gap_bet_them);
    gaps.erase(old_gap_it);


    int new_right_gap=*right_light-light;
    int new_left_gap=light-*left_light;

    gaps.insert(new_right_gap);
    gaps.insert(new_left_gap);

    lights.insert(light);

    cout<<*gaps.rbegin()<<" ";

  }
  return 0;
}