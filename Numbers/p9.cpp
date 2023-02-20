// C Program to Reverse a Number
#include<iostream>
using namespace std;
int reverseNumber(int,int);
// int reverseNumber(int);

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int reversedNumber = reverseNumber(num,0);
    // int reversedNumber = reverseNumber(num);
    cout<<"Reversed number is "<<reversedNumber;
    return 1;
}

// int reverseNumber(int num){
//     int result = 0;
//     while(num){
//         int digit = num % 10;
//         result = 10*result + digit;
//         num /= 10;
//     }
//     return result;
// }

// C Program to Reverse a Number using Recursion
int reverseNumber(int num,int result){
    if(num == 0 ){
        return result;
    }
    result = (10*result + num%10);
    return  reverseNumber(num/10,result);
}