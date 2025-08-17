#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// for_each
void printDouble(int a){
    cout<<2*a<<" ";
}

// find_if
bool CheckEven(int a){
    return a%2==0;
}

int main(){
    vector<int> arr;
    arr.push_back(11);
    arr.push_back(27);
    arr.push_back(10);
    arr.push_back(49);
    arr.push_back(12);

// for_each
    cout<<"for_each : ";
    for_each(arr.begin(),arr.end(),printDouble);    
    cout<<endl;
    //for_each(starting iterator, ending iterator, fxn_to_apply)
    //it applies function on each value of a data structure, starting from assigned location to assigned location
    //arr.begin se lekar arr.end tak, hrr ek element pr printDouble fxn apply krdo

// find
    // find()- finds the given target, if not found returns 0.
    // arr.begin se lekar arr.end tk find karo target -> auto is used to automatically define iterator type else we can also use vector<int>::iterator it = ....................
    int target=20;
    auto it = find(arr.begin(),arr.end(),target);
    (*it==target) ? cout<<"Target Found(using find)"<<endl : cout<<"Target not Found(using find)"<<endl;    

// find_if
    //function input dete h or range specify krte h container ki and uss container m jo bhi sbse phla element input function ko satisfy krta h uska iterator mil jayega

    // bool CheckEven(int a){
    //     return a%2==0;
    // }

    auto it1 = find_if(arr.begin(),arr.end(),CheckEven);
    cout<<"find_if(gives first occurrence of element which satisfy given fxn) : "<<*it1<<endl;   

// count
    // counts the number of times target appears in container
    int targetCount = 11;
    int ans = count(arr.begin(),arr.end(),targetCount);
    cout<<"Number of times "<<targetCount<<" appears (count): "<<ans<<endl;


// count if
    // counts the number of elements which satisfy the given function
    int res = count_if(arr.begin(),arr.end(),CheckEven);
    cout<<"No. of even (using count_if) : "<<res<<endl;

// sort
    // sorts the given container, we need to specify start and end position
    // sort(arr.begin(),arr.end());
    // // using for each loop
    // cout<<"Sort : ";
    // for(auto a:arr){
    //     cout<<a<<" ";
    // }
    // cout<<endl;

// reverse
    // reverse the given array
    reverse(arr.begin(),arr.end()); //reversing the original array, if i sort the array then reverse it, the o/p will be reverse of sorted array
    cout<<"Reverse : ";
    for(auto m:arr){
        cout<<m<<" ";
    }
    cout<<endl;

// rotate - left shift by defualt
    // rotate shift -> given number of places n se hrr element shift hojaata h and last ke n elements starting m aajate hai
    // rotate(start_from, shift_elements_by_n_places, end_to);
    // rotate(arr.begin(),arr.begin()+3,arr.end());    //Left shift
    // cout<<"Circular Left SHift (Rotate) : ";
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

// DOUBT
// rotate -> right shift
    // for left rotate -> arr.begin(),arr.begin()+3,arr.end() -> left rotate by 3 places 
    // for right rotate -> arr.begin(),arr.end()-3,arr.end() -> right rotate by 2 places
    // left = arr.begin()+n
    // right = size - left; -> right = 5-2 = 3;
    // rotate(arr.begin(),arr.end()-2,arr.end());  //rotate array to right by 2 places 
    // cout<<"Circular Right SHift (Rotate) : ";
    // for(auto u:arr){
    //     cout<<u<<" ";
    // }
    // cout<<endl;

// unique
    // removes duplicate element from sorted container
    // should be sorted container
    vector<int> brr;
    brr.push_back(11);
    brr.push_back(11);
    brr.push_back(11);
    brr.push_back(22);
    brr.push_back(22);
    brr.push_back(33);

    auto it2 = unique(brr.begin(),brr.end());
    // it iterator ke baad saare duplicate elements hai
    // and it se phle saare unique elements hai
    // erase elements after it, to obtain only unique elements
    brr.erase(it2,brr.end());
    for(auto p:brr){
        cout<<p<<" ";
    }
    cout<<endl;

// partition
    // returns iterator of elements which satisfy the given function
    // even before and odd after
    partition(arr.begin(),arr.end(),CheckEven);
    for(int s:arr){
        cout<<s<<" ";
    }
    cout<<endl;





    return 0;
}