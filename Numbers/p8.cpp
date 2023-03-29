// C Program to Find Sum of First N Natural Numbers
// C Program to Find Sum of Natural Numbers using Recursion
// C Program to Find the Sum of First 50 Natural Numbers using For Loop
#include<iostream>
using namespace std;
int naturalSum(int);

int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num < 1){
        cout<<"Number must be greate than 0"<<endl;
    }
    int sum = naturalSum(num);
    cout<<"Sum of first "<<num<<" natural number is "<<sum<<endl;
    return 1;
}

// int naturalSum(int n){
//     return (n*(n+1))/2;
// }

// Using recursion
// int naturalSum(int num){
//     if(num == 1){
//         return 1;
//     }
//     return num+naturalSum(num-1);
// }

// Using loop
int naturalSum(int num){
    int sum = 0;
    while(num){
        sum += num;
        num--;
    }
    return sum;
}
