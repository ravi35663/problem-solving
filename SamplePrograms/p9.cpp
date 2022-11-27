// C Program to Find Sum of Digits of a Number using Recursion
#include<iostream>
using namespace std;
int digitSum(int);
int main(){
    int num,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    num=(num<0?(-1*num):num);
    sum=digitSum(num);
    cout<<"Sum of digits is "<<sum<<endl;
}

int digitSum(int num){
    if(num==0)return 0;
    return (num%10+digitSum(num/10));
}