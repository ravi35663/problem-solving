/*
ABCDCBA
ABC CBA
AB   BA
A     A
*/


#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=1;i<num+1;i++){
        char value='A';
        for(int j=1;j<2*num;j++){
            if(j<num+2-i || j>num+i-2){
                cout<<" "<<value;
                j>num-1?value--:value++;
            }else{
                if(j==num){
                    value--;
                }
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}