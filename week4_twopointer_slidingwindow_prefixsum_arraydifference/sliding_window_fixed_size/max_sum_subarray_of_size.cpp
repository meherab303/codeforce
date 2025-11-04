

// Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

// Note: A subarray is a contiguous part of any given array.

// Examples:

// Input: arr[] = [100, 200, 300, 400], k = 2
// Output: 700
// Explanation: arr2 + arr3 = 700, which is maximum.








// class Solution {
//   public:
//     int maxSubarraySum(vector<int>& arr, int k) {
        
//         long long ans=0;
//         long long sum=0;
//         int l=0,r=0;
//         while(r<arr.size()){
            
//             sum+=arr[r];
//             if(r-l+1==k){
//                 ans=max(ans,sum);
//                 sum-=arr[l];
//                 l++;
//                 r++;
//             }else{
//                 r++;
//             }
//         }
//        return ans;
        
//     }
// };