//  Program to Find the Sum of Even and Odd Numbers
#include<iostream>
using namespace std;
int main(){
    int num,evenSum=0,oddSum=0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%2==0){
            evenSum+=i;
        }else{
            oddSum+=i;
        }
    }
    cout<<"Even Sum "<<evenSum<<endl;
    cout<<"Odd Sum "<<oddSum<<endl;
    return 1;
}