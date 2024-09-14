//dryrun-4,5

//1.Debug the code. This code is trying to calculate area of a rectangle.

// #include<iostream>
// using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	// int area = width * height;  //we are giving floating precision numbers in width and height but storing it in integer, which is wrong.
//     double area = width * height;
// 	cout << area << endl;
// 	return 0;
// }

//-------------------------------------------------------

//2. Debug the code. Convert Binary to Decimal.
// #include<iostream>
// using namespace std;

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         // int digit = n/10;   //change n/10 to n%10 to find remainder.
//         int digit = n%10;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         // n = n%10;   //change n%10 to n/10 to decrease the number.
//         n=n/10;
//     }
//     cout<<sum;
//     return 0;
// }

//-------------------------------------------------------

//3.Debug the code. Print all the prime numbers that lie in the range 2 to N (both inclusive) - No error
// #include<iostream>
// using namespace std;

// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

//-------------------------------------------------------

//4. Debug the code. Print reverse of a number.- No error
// #include<iostream>
// using namespace std;

// int main() {
// 	int n,a=0;
// 	cin>>n;
//     int z = n,digits=0;
//     while(z!=0){
//         z = z/10;
//         digits++;
//     }
//     while(n!=0){
//         int k = n%10,z=digits-1;
//         while(z--){
//             k = k*10;
//         }
//         a = a + k;
//         digits--;
//         n = n/10;
//     }
//     cout<<a;
//     return 0;
// }

//-------------------------------------------------------

//5. Debug the code. Return true if the number is member of fibonacci series else false.
// #include<iostream>
// using namespace std;

// bool checkMember(int n){    //here we change void to bool.
//     int f1 = 1, f2 = 1;
//     if(n==0 || n==1){
//         return true;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return false;
//             }
//             else if(temp>n){
//                 return true;
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;

//     bool result = checkMember(n);
//     cout<<result<<endl;

//     return 0;
// }

//------------------------------------------------------------


//6.Debug the code. Correct the code for printing the pattern.
/*
Pattern for N = 4
   1
  212
 32123
4321234
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=0,gaps = n-1;
//     while(i<n){
//         int k=0,gaps=n-1-i;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         int num = i+1;
//         while(num>0){
//             cout<<num;
//             num = num - 1;
//         }
//         k = 2;
//         while(k<=(i+1)){
//             cout<<k;
//             k++;
//         }
//         k =0;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         i++;
//         cout<<"\n";
//     }
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<n; row++){
        //spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        //pattern
        int a =row+1;
        for(int col=0; col<(2*row+1); col++){
            cout<<a;
            a--;
            // while(a>1){

            // }
        }
        cout<<endl;
    }

    return 0;
}