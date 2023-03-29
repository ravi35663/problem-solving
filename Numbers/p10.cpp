// C Program to Reverse a Number and Check if it is a Palindrome
#include<iostream>
using namespace std;
int reverseNumber(int);

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int reversedNumber = reverseNumber(num);
    if(reversedNumber == num){
        cout<<reversedNumber<<" Number is a palindrome"<<endl;
    }else{
        cout<<reversedNumber<<" Number is not a palindrome"<<endl;
    }
    return 1;
}

int reverseNumber(int num){
    int result = 0;
    while(num){
        int digit = num % 10;
        result = 10*result + digit;
        num /= 10;
    }
    return result;
}