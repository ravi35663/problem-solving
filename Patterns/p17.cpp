// CPP Program to Print Floyd’s Triangle
/*
    1  
    2 3  
    4 5 6  
    7 8 9 10
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int current_count = 1;
    for(int i = 1 ; i <= num;i++){
        for(int j=1;j<=i;j++){
            cout<<current_count<<" ";
            current_count++;
        }
        cout<<endl;
    }
    return 0;
}