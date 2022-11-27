// This is a C program to Increase 1 to all of the given Integer Digit
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    num=(num<0?-1*num:num);
    int sum=0;
    while(num){
        sum+=1+num%10;
        num/=10;
    }
    cout<<"Sum of digits is "<<sum<<endl;
    return 1;
}