#include<iostream>
#include<vector>
using namespace std;

// Method 2 is good

// int SqrtWithoutPrecision(int &x){
//     int s=0;
//     int e=x;
//     int ans=-1;

//     if(x<0)
//         return -1;

//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(mid*mid==x)
//             return mid;
//         else if(mid*mid > x)
//             e=mid-1;
//         else{
//             ans=mid;
//             s=mid+1;
//         }
//     }
//     return ans;
// }

// // METHOD-1
// double SqrtWithPrecision(int &x){
//     double sqrt = SqrtWithoutPrecision(x);  //sqrt=7.0
    
//     int precision;
//     cout<<"Enter No. of Precisions : ";
//     cin>>precision;

//     double step=0.1;

//     while(precision--){ //jitne precision honge utni baar ye loop chalega,i.e.,till precision value > 0
//         double j=sqrt;  //j=7.0 for x=63

//         while(j*j <= x){
//             // store and compute
//             sqrt=j;
//             j=j+step;
//         }    
//         step=step/10;
//     }
//     return sqrt;
// }

// METHOD-2
double SqrtWithPrecision(int &x){
    // edge cases
    if(x<0)
        return -1;
    if(x==0)
        return 0;

    double s=0;
    double e=x;
    double ans=0;

    // jb hum s<=e likhte h => that can also be e-s>=0 but this case for Integers,i.e.,NOn-Precision
    // So, for precision we have to write e-s>=(any 0.00000000.......1)
    while(e-s>=0.000000000001){  //more number of 0s means more precision
        double mid=s+(e-s)/2;
        double sqrt=mid*mid;

        if(sqrt<=x){
            ans=mid;
            s=mid;
        }
        else    
            e=mid;
    }
    return ans;
}

int main(){
    int x;
    cout<<"Enter a number to find its square root : ";
    cin>>x;

    double result = SqrtWithPrecision(x);
    // (result==-1) ? cout<<"Invalid Value"<<endl : cout<<"Square root of "<<x<<" with Precision : "<<result<<endl;

// the limitation of cout is that it can only print upto 5 precisions
// to overcome this limitation, we can use printf or set_precision 

    printf("Square root with precision is : %.10f\n",result);
    return 0;
}