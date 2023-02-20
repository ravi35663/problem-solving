// C Program to Check whether a Number is Prime or Not using Recursion
#include<iostream>
using namespace std;
bool isPrime(int,int);
int main(){
    int num,i=2;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num < 2){
        cout<<"Please enter a number greater than 1"<<endl;
        return 0;
    }
    bool prime = isPrime(num,i);
    if(prime){
        cout<<num<<" is a prime number"<<endl;
    }else{
        cout<<num<<" is not a prime number"<<endl;
    }
    return 1;
}

bool isPrime(int num,int i){
    if(i*i <= num){
        if(num%i == 0){
            return false;
        }
        i++;
        return isPrime(num,i);
    }
    return true;
}