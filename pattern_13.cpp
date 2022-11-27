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
    int numx2=2*num;
    for (int  i = 1; i < num+1; i++)
    {
        int count=i;
        for(int j=1;j<numx2;j++){
            if(j>num-i && j<num+i){
                
                cout<<count;
                j<num?count++:count--;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}