// 0,1,1,2,3,5 ......
// Fibonacci Series Program in C
#include<iostream>
using namespace std;
void fibonacciSeries(int);
int main(){
    int num;
    cout<<"Enter Limit"<<endl;
    cin>>num;
    if(num < 3){
        cout<<"Limit must be greater than 2"<<endl;
        return 0;
    }
    fibonacciSeries(num);
    return 1;
}


void fibonacciSeries(int num){
    int a = 0 , b = 1;
    cout<<a<<" "<<b<<" ";
    while(num){
        int temp = a;
        a = b;
        b += temp;
        cout<<b<<" ";
        num--;
    }
    cout<<endl;
}