/*
    1
   121
  12321
 1234321
123454321
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=1;i<num+1;i++){
        int value=1;
        for(int j=1;j<2*num;j++){
            if(j>num-i && j<num+i){
                cout<<" "<<value;
                j>num-1?value--:value++;
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}