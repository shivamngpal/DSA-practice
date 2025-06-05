#include<iostream>
using namespace std;

int tripletSumToX(int input[], int size, int x){
	int triplets = 0;
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			for(int k=j+1; k<size; k++){
				if(input[i] + input[j] + input[k] == x) triplets++;
			}
		}
	}
	return triplets;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int target=10;
    int ans = tripletSumToX(arr,n,target);
    cout<<ans<<endl;

    return 0;
}