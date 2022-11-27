/*
     1
    12
   123
  1234
 12345
  1234
   123
    12
     1
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    for (int  i = 1; i < 2*num; i++)
    {
        int count=1;
        for(int j=1;j<num+1;j++){
            if((i<=num && j>num-i) || (i>num && j>i-num)){
                cout<<count;
                count++;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}