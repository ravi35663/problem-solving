// C Program to Find the Largest Number Among Three Numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter three number followed by space"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1<<" is a greater number"<<endl;
    }else if(num2>num1 && num2>num3){
        cout<<num2<<" is a greater number"<<endl;
    }else{
        cout<<num3<<" is a greater number"<<endl;
    }
    return 1;
}