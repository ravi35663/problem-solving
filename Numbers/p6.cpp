// C Program to Print Armstrong Number between 1 to 1000
#include<iostream>
using namespace std;
bool isArmstrong(int);
int power(int,int);
int baseCount(int);
int main(){
    int start=1,end=1000;
    for(int i=start;i<=end;i++){
        int arms = isArmstrong(i);
        if(arms){
            cout<<i<<" ";
        }
    }
    cout<<"are all armstong numbers"<<endl;
    return 1;
}

bool isArmstrong(int num){
    int resultSum = 0;
    int tempNum = num;
    int base = baseCount(num);
    while(num){
        int rem = num%10;
        resultSum += power(rem,base);
        num /=10;
    }
    if(resultSum == tempNum){
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

int baseCount(int num){
    int count = 0;
    while(num){
        num /= 10;
        count++;
    }
    return count;
}