/**
    #
   ###
  #####
 #######
#########
 #######
  #####
   ###
    #
 **/

#include<iostream>
using namespace std;
int main(){
   int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    int double_num = num*2;
    for(int i=1;i<double_num;i++){
        for(int j=1;j<double_num;j++){
            if(i<=num ){
                if(j>num-i && j<num+i){
                    cout<<"#";
                }else{
                    cout<<" ";
                }
            }else{
                if(j>i-num && j< double_num+num-i){
                    cout<<"#";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}