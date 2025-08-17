#include <iostream>
using namespace std;

pair<int,int> arraysize(char arr[]){
    pair<int,int> p = make_pair(-1,-1);
    int counter=0;
    int index=0;
    int spcounter=0;
    while(arr[index] != '\0'){
        // jabtak array me Null character nahi mil jaata tab tk counter++ karte jao or index++ karo.
        if(arr[index]==' '){
            spcounter++;
        }
        counter++;
        index++;
    }
    p.first=counter;
    p.second=spcounter;
    return p;
}

int main() {
    char arr[100];
    // int size=100;

    cout<<"Enter your name : ";

    // cin>>arr;

    // any character can be a delimiter
    // cin.getline(arr,100,'\n');  //arr me input lo upto 100 characters tak and whenever new line is encountered, stop taking input
    cin.getline(arr,100,'\n');    //here input will be stopped as soon as S is encountered
    cout<<"Printing Char Array : "<<arr<<endl;

    cout<<"capacity of arr : "<<sizeof(arr)/sizeof(char)<<endl;
    pair<int,int> ans=arraysize(arr);
    cout<<"Size of char array : "<<ans.first<<"\nSpaces in array : "<<ans.second<<endl;
    // printing Null character
    // In order to print null character, we have to convert it to int because we need to print 0
    // the null character is not printed w/o converting it to ASCII character


    


    return 0;
}