#include <iostream>

int main() {
    int arr[3][3];
    int rowsize = 3;
    int colsize = 3;
    // taking column wise input from user
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            std::cout<<"Enter element in index :"<<j<<","<<i<<": ";
            std::cin>>arr[j][i];
        }
    }
    std::cout<<std::endl;

    // printing array row wise
    std::cout<<"Printing Array"<<std::endl;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}