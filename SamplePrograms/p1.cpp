// C Program to Check Whether a Given Number is Even or Odd
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"Numer is event"<<endl;;
    }else{
        cout<<"Number is odd"<<endl;
    }
    return 1;
}