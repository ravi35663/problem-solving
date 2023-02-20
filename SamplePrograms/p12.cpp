// C Program to Print Multiplication Table
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter table you want to print"<<endl;
    int num;
    cin>>num;
    for(int i=1;i<=10;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    cout<<"Required table is shown above"<<endl;
    return 0;
}