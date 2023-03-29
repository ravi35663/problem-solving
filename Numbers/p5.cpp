// C Program to Check Armstrong Number
#include<iostream>
using namespace std;
bool isArmstrong(int);
int power(int,int);
int main(){
    int num;
    cout<<"Enter a number "<<endl;
    cin>>num;
    bool arms = isArmstrong(num);
    if(arms){
        cout<<num<<" is an armstong number"<<endl;
        return 1;
    }else{
        cout<<num<<" is not an armstong number"<<endl;
        return 0;
    }
}

bool isArmstrong(int num){
    int tempNum = num;
    int base = 0;
    int resultSum = 0;
    while(tempNum){
        tempNum /= 10;
        base++;
    }
    tempNum = num;
    while(tempNum){
        int rem = tempNum % 10;
        resultSum += power(rem,base);
        tempNum /= 10;
    }
    if(resultSum == num){
        return true;
    }
    return false;
}

int power(int num,int base){
    if(base == 0){
        return 1;
    }
    return num*power(num,base-1);
}