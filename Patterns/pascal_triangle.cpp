// C Program to Print Pascal Triangle

/*
                    1
1.                1    1
2.              1    2    1
3.            1    3    3    1
4.          1    4    6    4    1
5.        1    5    10   10   5    1
6.      1    6    15   20   15   6    1
*/

#include<iostream>
using namespace std;
int factorial(int);
void usingBinomiaMethod(int);
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    usingBinomiaMethod(num);
}

// Solve using Binomial coefficient
void usingBinomiaMethod(int num){
    int double_number = 2*num;
    int k ;
    for(int i=1;i<=num;i++){
        k = 0;
        int n = i-1;
        for(int j=1 ; j<double_number ; j++){
            if(( j>num-i && j<num+i && (i+j)%2 == 0)){
                int bc = factorial(n)/(factorial(k)*factorial(n-k));
                k++;
                cout<<bc;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num*factorial(num-1);
}