/*
     1
    232
   34543
  4567654
 567898765 
*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    for (int  i = 1; i < num+1; i++)
    {
        int count=num-i;
        for(int j=1;j<num+1;j++){
            if(j<num+2-i){
                
                cout<<count;
                count--;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}