// C Program to Find the Factorial of a Number
#include<iostream>
using namespace std;
int factorial(int);
int main(){
    cout<<"Enter a number"<<endl;
    int num;
    cin>>(num);
    int result = factorial(num);
    cout<<"Result is "<<result<<endl;
    return 0;
}

// Using recursion 
// int factorial(int num){
//     if(num == 0){
//         return 1;
//     }
//     return num*factorial(num-1);
// }

int factorial(int num){
    if(num == 0)return 1;
    int result = 1;
    while(num > 1){
        result *= num;
        num--;
    }
    return result;
}