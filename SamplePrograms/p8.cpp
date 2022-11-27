// C Program to Find Sum of Digits of a Number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    num=(num<0?(num*-1):num);
    int sum=0;
    while(num){
        sum+=(num%10);
        num/=10;
    }
    cout<<"Sum of digits is "<<sum<<endl;
    return 1;
}