// C Program to Find Nth Fibonacci Number using Recursion
#include<iostream>
using namespace std;
// int fibonacciNumber(int,int,int);
int fibonacciNumber(int);
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    // int result = fibonacciNumber(num,0,1);
        int result = fibonacciNumber(num);
    cout<<num<<"th number of fibonacci series is "<<result<<endl;
    return 0;
}

//  Method-1
// int fibonacciNumber(int num,int a,int b){
//     if(num == 0){
//         return a;
//     }
//     if(num == 1){
//         return b;
//     }
//     int temp = a;
//     return fibonacciNumber(num-1,b,b+temp);
// }

//  Method-2
int fibonacciNumber(int num){
    if(num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    return (fibonacciNumber(num-1) + fibonacciNumber(num-2));
}