// C Program to Swap Two Numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    num1+=num2;
    num2=num1-num2;
    num1-=num2;
    cout<<"Swaped numbers are "<<num1<<" "<<num2<<endl;
    return 1;
}