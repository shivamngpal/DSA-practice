#include<iostream>
#include<vector>
using namespace std;
// jere we are finding number of pairs
// we have to list all the pairs that sum to target

int pairSumToX(int input[], int size, int x){
	int pairs = 0;
    // vector<pair<int,int>> ans;
	for(int i=0; i<size; i++){
		for(int j=i; j<size; j++){
			if(input[i] + input[j] == x){
                pairs++;
            } 
		}
	}
    return pairs;
	// return pairs;
}
// vector<pair<int,int>> pairSumToX(int input[], int size, int x){
// 	// int pairs = 0;
//     vector<pair<int,int>> ans;
// 	for(int i=0; i<size; i++){
// 		for(int j=i; j<size; j++){
// 			if(input[i] + input[j] == x){
//                 pair<int,int> p = make_pair(input[i],input[j]);
//                 ans.push_back(p);
//             } 
// 		}
// 	}
//     return ans;
// 	// return pairs;
// }
int main(){
    int input[]={1,2,3,4,5,6};
    int n=6;
    int target=5;

    int result = pairSumToX(input,n,target);
    cout<<result<<endl;
    // vector<pair<int,int>> result = pairSumToX(input,n,target);
    // for(size_t i=0; i<result.size(); i++){
    //     cout<<result[i].first<<","<<result[i].second<<endl;
    // }
    return 0;
}