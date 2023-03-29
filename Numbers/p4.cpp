// Strong Number Program in CPP
#include<iostream> 
using namespace std;
bool isStrongNumber(int);
int factorial(int);
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    bool isStrong = isStrongNumber(num);
    if(isStrong){
        cout<<num<<" is a strong number"<<endl;
    }else{
        cout<<num<<" is not a strong number"<<endl;
    }
}

bool isStrongNumber(int num){
    int sum = 0;
    int tempNum = num;
    while(num){
        int remainder = num%10;
        int fact = factorial(remainder);
        sum += fact;
        num = num/10;
    }
    if(sum == tempNum){
        return true;
    }
    return false;
}

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num*factorial(num-1);
}