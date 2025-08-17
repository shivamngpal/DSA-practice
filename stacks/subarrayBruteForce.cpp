// // #include<iostream>
// // #include<vector>

// // using namespace std;

// // int main(){
// //     vector<int> v={3,1,2,4};
// //     vector<vector<int>> ans;

// //     for(int i=0; i<v.size(); i++){
// //         ans.push_back({v[i]});
// //     }

// //     for(int i=0; i<v.size()-1; i++){
// //         for(int j=i+1; j<v.size(); j++){

// //         }
// //     }

// //     return 0;
// // }

// #include <iostream>
// #include <vector>
// using namespace std;

// void printAllSubarrays(vector<int>& arr, vector<vector<int>> & subarray) {
//     int n = arr.size();
    
//     for (int start = 0; start < n; start++) {
//         for (int end = start; end < n; end++) {
//             // Add current element to subarray
//             // if(start!=end)
//                 subarray.push_back({arr[start],arr[end]});
            
//             else
//                 subarray.push_back({arr[start]});
//             // Print the current subarray
//             // for (int val : subarray)
//             //     cout << val << " ";
//             // cout << endl;
//         }
//     }
// }

// int main() {
//     vector<int> arr = {1, 2, 3};
//     vector<vector<int>> subarray;
//     printAllSubarrays(arr, subarray);
    
//     for(int i=0; i<subarray.size(); i++){
//         cout<<subarray[i]<<endl;
//     }

//     return 0;
// }
