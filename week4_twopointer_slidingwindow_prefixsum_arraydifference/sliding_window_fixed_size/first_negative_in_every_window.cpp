

//Given an array arr[]  and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

// Note: If a window does not contain a negative integer, then return 0 for that window.

// Examples:

// Input: arr[] = [-8, 2, 3, -6, 10] , k = 2
// Output: [-8, 0, -6, -6]



// class Solution {
//   public:
//     vector<int> firstNegInt(vector<int>& arr, int k) {
//         int n=arr.size(),l=0,r=0;
//         vector<int>ans;
//         queue<int>q;
        
//         while(r<n){
            
//            if(arr[r]<0){
//             q.push(arr[r]);
//            }
           
//            if(r-l+1==k){
//                if(!q.empty()){
//                    ans.push_back(q.front());
                   
//                    if(arr[l]==q.front()){  // karon purono window er l new window te kono contribute korbena
//                        q.pop();
//                    } 
                   
                   
                   
//                }
//                else{
//                    ans.push_back(0);
//                }
               
//                l++,r++;
               
//            }
//            else{
//                r++;
//            }
        
        
//         }
        
        
//       return ans;  
//     }
// };