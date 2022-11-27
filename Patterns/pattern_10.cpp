/*
  *
 ***
*****
 ***
  *
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int numx3=3*num;
    int numx2=2*num;
    for (int  i = 1; i < numx2; i++)
    {
        for(int j=1;j<numx2;j++){
            if((i<num+1 && j>num-i && j<num+i) || (i>num && j>i-num && j<numx3-i)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}