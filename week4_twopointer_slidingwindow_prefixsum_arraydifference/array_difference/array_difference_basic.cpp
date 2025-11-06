#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, q;
    cin >> n >> q; 
    // n = array size, q = number of queries

    // 🟢 Step 1: মূল array input নিচ্ছি
    vector<int> mainV(n + 1); // 1-based indexing. karon main array er first value 0 kora dorker for pattern matching
    for (int i = 1; i <= n; i++) {
        cin >> mainV[i];
    }

    // 🟢 Step 2: difference array তৈরি করছি
    vector<int> diff(n + 2); // n+2 কারণ r+1 index এ update লাগবে jodi sesh value porjonto range deya  thake
    for (int i = 1; i <= n; i++) {  // difference array er first value 0.
        diff[i] = mainV[i] - mainV[i - 1];
    }

    // 🔹 print initial difference array (debugging purpose)
    cout << "Initial difference array: ";
    for (int i = 0; i <= n + 1; i++) {
        cout << diff[i] << " ";
    }
    cout << endl;

    // 🟢 Step 3: এখন q টা range update query নিচ্ছি
    // প্রতিটি query এর জন্য l, r, x দেওয়া থাকবে
    // মানে l থেকে r পর্যন্ত প্রতিটি element এ x যোগ হবে
    for (int i = 0; i < q; i++) {
        int l, r, x;
        cin >> l >> r >> x;

        // difference array তে update করা হচ্ছে:
        // l index এ +x যোগ করবো.  karon l er ager value theke difference barbe jeheto l e jug hbe. .
        // r+1 index এ -x করবো. karon r er sathe  r+1 er difference kombe.karon porer value te value add hbena.
        // l ar r er majhkhane difference barbena jeheto l and r er modde shobgulatei same value add hbe.
        diff[l] += x;
        diff[r + 1] -= x;
    }

    // 🔹 print updated difference array (debugging purpose)
    cout << "Updated difference array: ";
    for (int i = 0; i <= n + 1; i++) {
        cout << diff[i] << " ";
    }
    cout << endl;

    // 🟢 Step 4: এখন difference array থেকে মূল array rebuild করবো
    vector<int> final_vector(n + 1);
    for (int i = 1; i <= n; i++) {   // final vector er first value 0 for pattern matching.
        final_vector[i] = final_vector[i - 1] + diff[i];
    }

    // 🔹 Step 5: final updated array print করা হচ্ছে
    cout << "Final updated main array: ";
    for (int i = 1; i <= n; i++) {   // final vector er first value =0.tai 1 theke start hobe loop.
        cout << final_vector[i] << " ";
    }

    return 0;
}



// main concept: 
// 1.kon index er contribution koto eita age ber korbo 
//2.then diff er array prefix sum ber korbo
//3.then according to question prefix sum er basis e kaj korbo 
