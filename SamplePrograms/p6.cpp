// C Program to Find the Number of Integers Divisible by 5 within a range and also find their sum
#include<iostream>
using namespace std;
int main(){
    int low,high,sum=0;
    cout<<"Enter range"<<endl;
    cin>>low>>high;
    if(low<0 && high<0){
        cout<<"Please enter positive number"<<endl;
        return 0;
    }else{
        low=(low<high?low:high);
        high=(low<high?high:low);
        for(int i=low;i<=high;i++){
            if(i%5==0){
                cout<<i<<" ";
                sum+=i;
            }
        }
        cout<<"are the numbers divisiable by 5"<<endl;
        cout<<"Sum of all numbers which are divisbale by 5 is  "<<sum<<endl;
        return 1;
    }
}