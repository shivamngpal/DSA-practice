#include<iostream>
#include<vector>

using namespace std;

// int OddOccuringElement(vector<int> & arr){
//     int n=arr.size();
//     int s=0;
//     int e=n-1;

//     // Iss question me Jo odd occuring element hai -> uss tak jitne bhi element hai sbke starting index even hai and uske baad odd hai.
//     // hmare pass 4 case h
//     //case1 -> single element h array me -> s==e -> return s or e
//     // case2-> mid ke na left element equal h or na hi right element -> means mid hi hmara odd occuring element hai-> return mid
//     // case3-> mid ke left wala element duplicate h -> means starting index element ka mid-1 h toh agr mid-1 is even to move right else left
//     // case4-> mid ke right element duplicate h-> means starting index is mid -> check if mid is even then move right else left

//     while(s<=e){
//         int mid =s+(e-s)/2;
//         int currentValue=arr[mid];
//         int leftValue=-1;
//         int rightValue=-1;

//         if(mid-1>=0)
//             leftValue=arr[mid-1];

//         if (mid+1<n)
//             rightValue=arr[mid+1];
        
//         if(s==e)
//             return s;
//         else if((mid-1)>=0 && (leftValue!=currentValue) && (mid+1)<n && (currentValue!=rightValue)){
//             // mid hi odd ocurring element hai
//             return mid;
//         }
//         else if((mid-1)>=0 && (currentValue==leftValue)){
//             // mid ke left wala starting index hai
//             int pairIndex=mid-1;
//             if(pairIndex&1){
//                 // starting index is odd
//                 // move left
//                 e=mid-1;
//             }
//             else{
//                 // starting index is even
//                 // move right
//                 s=mid+1;
//             }
//         }
//         else if((mid+1)<n && (currentValue==rightValue)){
//             int pairIndex=mid;
//             if(pairIndex&1){
//                 // starting index is odd
//                 // means we are right to odd occuring element
//                 // move left
//                 e=mid-1;
//             }
//             else{
//                 // starting index is even
//                 // move right
//                 s=mid+1;
//             }
//         }
//     }
//     return -1;
// }

// THIS IS ALSO CORRECT CODE

int OddOccuringElement(vector<int> & arr){
    int n=arr.size();
    int s=0;
    int e=n-1;
    int ansIndex=-1;

    while(s<=e){
        int mid=s+((e-s)>>1);
        if((mid-1)>=0 && arr[mid]!=arr[mid-1] && (mid+1)<n && arr[mid]!=arr[mid+1])
            return mid;
        else if((mid+1)<n && arr[mid]==arr[mid+1]){
            if(mid & 1){
                e=mid-1;
            }
            else    
                s=mid+1;
        }
        else
            s=mid+1;
    }
    return -1;
    // while(s<=e){
    //     int mid = s+(e-s)/2;
    //     if((mid-1)>=0 && (arr[mid-1]==arr[mid]) || (mid+1)<n && (arr[mid]==arr[mid+1])){
    //         if(arr[mid]==arr[mid-1]){
    //             if((mid-1)%2==0){
    //                 ansIndex=mid-1;
    //                 s=mid+1;
    //             }
    //             else{
    //                 e=mid-1;
    //             }
    //         }
    //         else{
    //             if(mid%2==0){
    //                 ansIndex=mid;
    //                 s=mid+1;
    //             }
    //             else
    //                 e=mid-1;
    //         }
    //     }
    //     else{
    //         return mid;
    //     }
    // }
    // return ansIndex;
}

int main(){
    vector<int> arr={1,1,2,2,3,3,4,5,5};
    int res = OddOccuringElement(arr);
    (res==-1) ? cout<<"No odd occuring element"<<endl : cout<<"Odd Occurring Element Index : "<<res<<" and element is : "<<arr[res]<<endl;



    return 0;
}