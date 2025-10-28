// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
  
//   int t;cin>>t;
//   while(t--){
//     int n;cin>>n;
//     string a,b;cin>>a>>b;
//     multiset<char>mst1;
//     multiset<char>mst2;
//     bool flag=false;
//     for(auto c:a){
//         mst1.insert(c);
//     }
//     for(auto c:b){
//         mst2.insert(c);
//     }
//     if(mst1.size()!=mst2.size()){
//         cout<<"NO"<<endl;
//         continue;
//     }else{
//         auto it1=mst1.begin();
//         auto it2=mst2.begin();
//         while(it1!=mst1.end()&& it2!=mst2.end()){
//             if(*it1!=*it2){
//                 flag=true;
//                 break;
//             }else{
//                 it1++;
//                 it2++;
//             }
//         }
//     }

//     if(flag){
//         cout<<"NO"<<endl;
//     }else{
//         cout<<"YES"<<endl;
//     }

//   } 
//   return 0;
// }


//cleaner code

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        multiset<char> mst1(a.begin(), a.end());
        multiset<char> mst2(b.begin(), b.end());

        if (mst1 != mst2) { // multiset compare করার সময় size + elements একসাথে check করে।
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}

