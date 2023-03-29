// C Program to Find Prime Numbers in a Given Range
#include<iostream>
using namespace std;
bool isPrime(int,int);
int main(){
    int num;
    cout<<"Enter a range to print prime numbers"<<endl;
    int r_start,r_end;
    cin>>r_start>>r_end;
    int start = r_start<r_end ? r_start:r_end;
    int end = r_start>r_end ? r_start:r_end;
    if(start <=1 || end <= 1){
        cout<<"Please enter a valid range"<<endl;
        return 0;
    }
    for(int i=start ;i<=end;i++){
        bool prime = isPrime(i,2);
        if(prime == true){
            cout<<i<<" ";
        }
    }
    cout<<"are all prime numbers in a given range"<<endl;
}

// bool isPrime(int number){
//     for(int i=2 ;i*i<=number;i++){
//         if(number%i == 0){
//             return false;
//         }
//     }
//     return true;
// }


bool isPrime(int num,int i){
    if(i*i <= num){
        if(num%i == 0){
            return false;
        }
        i++;
        return isPrime(num,i);
    }
    return true;
}