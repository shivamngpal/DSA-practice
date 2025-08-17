//1.Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.

// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c /*||*/  && c<= 'z'){  //c ya toh a se bda or equal ho ya z se chota ho , and this line is wrong. So change || (or) To && (and).
//         cout<<0;
//     }
// 	else if('A'<=c /*||*/ && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }

//-----------------------------------------------------------
//DRY RUN IN NOTEBOOK
//2. Debug the code. It is trying to print the given pattern.
/*
Pattern
1
23
345
4567
*/
// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cout<<"Enter n : "; 
//     cin>>n;
//     int i=1;
//     while(i<n){
//         int j = i,count = 1;
//         while(count<=i){
//             cout<<j<<" ";
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

//-----------------------------------------------------------
//3. Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){         
//         int count = 2*n+1,gaps=(n-i-1),k=0; 
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 1,ch = count - 2*gaps - n;     
//         while(m<=ch){
//             cout<<"*";
//             m = m + 1;
//         }

//         //NOT USEFUL as we are printing spaces after pattern is printed using this code.
//         // k = 0;
//         // while(k<=gaps){     //made k=0 it was k=1
//         //     cout<<" ";
//         //     k = k + 1;
//         // }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

//---------------------------------------------------------
//4. Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
1
22
333
4444
*/
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=0;i<n;i++){
//         for(j=0;j<i+1;j++){
// 	        cout<<i+1;
//         }
//     cout<<endl;
//     }
// }


//---------------------------------------------------------
//5. Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
1
21
321
4321
*/
// #include<iostream>
// using namespace std;

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<=n;i++){
//        int p=i;
//         for(j=1;j<=i;j++){
//             cout<<p;
//             p--;
//         }
//         cout<<endl;
        
//     }
// }

//---------------------------------------------------------
//6. Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j,n;;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         char p='A'-i+n;
//         for(j=1;j<=i;j++){
//             cout<<p;
//             p++;  
//         }
//         cout<<endl;
//     }
// }

//-----------------------------------------------------------
//7. Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=1;
    int n = 2*no;
    while(i<=(no)){
        int gaps = n-2*i+1,k=1;
        int j = i;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps + 1, z = (ch+1)/2;
        while(z>1){
            cout<<j;
            j = j - 1;
            z = z + 1;
        }
        j = j - 1;
        z = (ch-1)/2;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}