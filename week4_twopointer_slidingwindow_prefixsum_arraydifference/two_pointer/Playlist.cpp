// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
  
//   int n;cin>>n;
  
//   map<int,int>last_index;
//   int ans=0;
//   int i;
//   for(int j=1;j<=n;j++){
//     int x;cin>>x;
   
//     i=max(i,last_index[x]+1);
//     last_index[x]=j;
//     ans=max(ans,j-i+1);

//   }

//   cout<<ans<<endl;
  
//   return 0;
// }





#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n; cin >> n;
  
  map<int,int> last_index; // প্রতিটা সংখ্যার সর্বশেষ অবস্থান (index) রাখার জন্য
  int ans = 0;             // সবচেয়ে বড় unique subarray-এর দৈর্ঘ্য রাখবে
  int i = 0;               // current window-এর শুরুর index
  
  for(int j = 1; j <= n; j++){
    int x; cin >> x;       

    //Step 1: যদি এই সংখ্যা আগেও দেখা যায়, 
    // তাহলে সেই সংখ্যার আগের occurrence-এর পর থেকে window শুরু করতে হবে
    // 2,3,5,7,2,1,5,3,3 ei input diye overall problem check korle hoye jabe
    i = max(i, last_index[x] + 1);  

    //Step 2: এই সংখ্যার সর্বশেষ অবস্থান আপডেট করো
    last_index[x] = j;

    //Step 3: এখন পর্যন্ত পাওয়া unique subarray-এর দৈর্ঘ্য হিসাব করো
    ans = max(ans, j - i + 1);
  }

  cout << ans << endl;  // 🏁 সবচেয়ে বড় unique subarray-এর দৈর্ঘ্য প্রিন্ট করো
  
  return 0;
}