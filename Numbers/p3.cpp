// C Program to Check Whether a Given Number is Perfect Number
#include<iostream>
using namespace std;
bool isPerfectNumber(int);
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    bool isPerfect = isPerfectNumber(num);
    if(isPerfect){
        cout<<num<<" is a perfect number"<<endl;
    }else{
        cout<<num<<" is not a perfect number"<<endl;
    }
    return 1;
}

bool isPerfectNumber(int num){
    int sum = 0;
    for(int i=1;i<=num/2;i++){
        if(num%i == 0){
            sum += i;
        }
    }
    if(sum == num){
        return true;
    }
    return false;
}