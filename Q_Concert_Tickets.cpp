#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int tick,cus;
  cin>>tick>>cus;
  
  multiset<int>mst;
  for(int i=0;i<tick;i++){
    int t_price;cin>>t_price;
    mst.insert(t_price);

  }
  vector<int>result;

  for(int i=0;i<cus;i++){
    int c_price;cin>>c_price;

    auto right_tick_p=mst.lower_bound(c_price);

    if(*right_tick_p==c_price){
        result.push_back(c_price);
        mst.erase(right_tick_p);

    }
    else if(right_tick_p!=mst.begin()) {
        auto left_tick_p=prev(right_tick_p);
        if(*left_tick_p<c_price){
            result.push_back(*left_tick_p);
            mst.erase(left_tick_p);
        }else{
            result.push_back(-1);
        }

    }else{
        result.push_back(-1);
    }
    


  }

  for(auto val:result){
    cout<<val<<endl;
  }
  return 0;
}


//better version


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;

//     multiset<int> tickets;
//     for (int i = 0; i < n; i++) {
//         int price;
//         cin >> price;
//         tickets.insert(price);
//     }

//     for (int i = 0; i < m; i++) {
//         int max_price;
//         cin >> max_price;

//         // Find first ticket > max_price
//         auto it = tickets.upper_bound(max_price);

//         if (it == tickets.begin()) {
//             // No ticket ≤ max_price
//             cout << -1 << "\n";
//         } else {
//             --it; // move to the largest ticket ≤ max_price
//             cout << *it << "\n";
//             tickets.erase(it); // remove the ticket as it is sold
//         }
//     }

//     return 0;
// }
