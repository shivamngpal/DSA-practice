#include<iostream>
#include<vector>
using namespace std;

void RotateArray(vector<int> &arr){
    int shift;
    cout<<"Enter No. of places to shift an Array with : ";
    cin>>shift;

    int n = arr.size();
    shift=shift%n;

    // Store elements to shift
    vector<int> temp(shift);
    int index=0;
    for(int i=n-shift; i<n; i++){
        temp[index]=arr[i];
        index++;
    }

    // shift elements in arr
    for(int i=n-1; i>=0; i--){
        if(i-shift >=0)
            arr[i]=arr[i-shift];
    }

    // put back elements from temp in arr
    for(int i=0; i<shift; i++){
        arr[i]=temp[i];
    }

}

int FindPivotIndex(vector<int>& arr){
    int n=arr.size();
    int s=0; 
    int e=n-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        // For single element -> that element itself is a pivot
        if(s==e)
            return s;
        
        else if(mid+1<n && arr[mid]>arr[mid+1])
            return mid;
        
        else if(arr[mid]<arr[s])
            e=mid-1;

        else    
            s=mid+1;
    }
    return -1;
}

int BinarySearch(int s, int e, int target, vector<int>& arr){
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==target)
            return mid;
        
        else if(arr[mid]>target)
            e=mid-1;
        
        else    
            s=mid+1;
    }
    return -1;
}

int SearchInRotatedSortedArray(vector<int> &arr, int target, int pivot){
    int n=arr.size();
    int s=0;
    int e=n-1;

    while(s<=e){
        // int mid=s+(e-s)/2;

        if(target>=arr[0] && target<=arr[pivot]){
            // Apply BS
            int ans = BinarySearch(0,pivot,target,arr);
            return ans;
        }

        else{
            int ans = BinarySearch(pivot+1,n-1,target,arr);
            return ans;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={10,20,30,40,50,60,70};

    RotateArray(arr);
    // printing rotated array
    for(size_t i=0; i<arr.size(); i++){ //instead of int, we used size_t because we are comparing signed int with unsigned int,i.e., 'i' which is signed int is compared to arr.size() which is unsigned. i<arr.size()
        cout<<arr[i]<<" ";
    }

    int pivot = FindPivotIndex(arr);
    cout<<"Pivot Index : "<<pivot<<endl;

    // After finding pivot search in array
    int target = 70;
    
    int res = SearchInRotatedSortedArray(arr,target,pivot);
    (res==-1) ? cout<<"No element Found"<<endl : cout<<"Element Found on Index : "<<res<<endl;

    return 0;
}