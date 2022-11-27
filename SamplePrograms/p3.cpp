// C program to Check Whether a Number is Positive or Negative
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num<0){
        cout<<"Number is negative "<<num<<endl;
    }else{
        cout<<"Number is positive "<<num<<endl;
    }
}