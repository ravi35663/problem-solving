// C Program to Find Nth Armstrong Number
#include<iostream>
using namespace std;
long long int baseCount(long long int,long long int);
bool isArmstrong(long long int);
long long int power(long long int,long long int);

int main(){
    long long int num;
    cout<<"Enter nth number you want to get"<<endl;
    cin>>num;
    if(num < 1){
        cout<<"input number must be greater than 0"<<endl;
        return 0;
    }
    long long int tempNum = num;
    long long int input = 1;
    long long int armstrongNumber = 1;
    while(num){
        bool isArms = isArmstrong(input);
        if(isArms){
            armstrongNumber = input;
            num--; 
        }
        input++;
    }
    cout<<tempNum<<"th armstrong number is "<<armstrongNumber<<endl;
    return 1;
}


bool isArmstrong(long long int num){
    long long int bc = baseCount(num,0);
    long long int resultSum = 0;
    long long int tempNum = num;
    while(num){
        long long int rem = num%10;
        resultSum += power(rem,bc);
        num /= 10;
    }
    if(resultSum == tempNum){
        return true;
    }
    return false;
}

long long int power(long long int num,long long int count){
    if(count == 0){
        return 1;
    }
    return num*power(num,count-1);
}

long long int baseCount(long long int num,long long int count){
    if(num == 0){
        return count ;
    }else{
        return baseCount(num/10,count+1);
    }
}