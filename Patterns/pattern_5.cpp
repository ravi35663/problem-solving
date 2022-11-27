/*
    *    
   * *
  * * *
 * * * *
* * * * *
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for(int i=1;i<num+1;i++){
        for(int j=1;j<2*num;j++){
            if(j>num-i && j<num+i && (i+j)%2==0){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}