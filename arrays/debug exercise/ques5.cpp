#include<iostream>
using namespace std;

//correct
int pairSumToX(int input[], int size, int x){
	int pairs = 0;
	for(int i=0; i<size; i++){
		for(int j=0; j<size; j++){
			if(input[i] + input[j] == x) pairs++;
		}
	}
	return pairs;
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=7;
    int target=90;

    int ans = pairSumToX(arr,size,target);
    cout<<"No. of pairs equal to target are : "<<ans<<endl;


    return 0;
}


//Error
// int pairSumToX(int input[], int size, int x){
// 	int pairs = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i; j<size; j++){
// 			if(input[i] + input[j] == x) pairs++;
// 		}
// 	}
// 	return pairs;
// }