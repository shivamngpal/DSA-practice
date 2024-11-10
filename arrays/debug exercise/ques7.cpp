#include<iostream>
using namespace std;

void sort0sand1s(int input[], int size){
	int nextZero = 0;
	for(int i=0; i<size; i++){
		if(input[i] == 0){
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
            nextZero++;
		}
	}
}

int main(){
    int arr[]={0,1,1,0,1,0,1,1,0,0};
    int size=10;

    sort0sand1s(arr,size);

    //printing array
    cout<<"Printing sorted array : "<<" ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    } 


    return 0;
}


//error
// void sort0sand1s(int input[], int size){
// 	int nextZero = 0;
// 	for(int i=0; i<size; i++){
// 		if(input[nextZero] == 0){
// 			int temp = input[nextZero];
// 			input[nextZero] = input[i];
// 			input[i] = temp;
// 		}
// 	}
// }